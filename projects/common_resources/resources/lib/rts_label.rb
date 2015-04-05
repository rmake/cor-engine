
class RtsLabel
  
  @@first = true
  @@all_font_textures = []
  @@all_back_font_textures = []
  @@all_line = {}
  @@all_chatacter = {}
  @@max_line = 0
  @@last_label = nil
  @@all_label = {}
  @@enable_set_text = true
  @@current_id = 1
  
  @@loading_st = Proc.new {}
  @@loading_ed = Proc.new {}
  
  WIDTH = 512
  
  USE_LABEL_MODE = true
  
  attr_accessor :font_name
  attr_accessor :font_size
  attr_accessor :all_size
  attr_accessor :edge_size
  attr_accessor :bold_size
  attr_accessor :node
  attr_accessor :text
  attr_accessor :setted_text
  attr_accessor :color
  attr_accessor :line_height
  
  def initialize(options = {})
  
    if USE_LABEL_MODE
      
      self.node = Node.create
      
      self.font_name = options[:font_name] || "fonts/MTLc3m.ttf"
      self.edge_size = options[:edge_size] || 0
      self.bold_size = 0 #options[:bold_size] || 0
      self.font_size = options[:font_size] || 34
      self.color = options[:color] || Color3B.create(255, 255, 255)
      self.line_height = nil
      
      self.all_size = self.font_size + self.edge_size * 2
      self.line_height ||= self.all_size
      
      @label = Label.create_with_ttf " ", self.font_name, self.font_size, Size.create(0, 0), 0, 0
      
      config = @label.get_ttf_config
      config.outline_size = self.edge_size
      @label.set_ttf_config config
      @label.set_color self.color
      
      self.node.add_child @label
      
      self.set_text options[:text]
      
      return
    end
    
    #if !@@all_font_texture
    #  @@all_font_texture = RenderTexture.create WIDTH, WIDTH, 2, 35056
    #  @@all_font_texture.retain
    #  
    #  @@all_font_texture.clear 0.0, 0.0, 0.0, 0.0
    #  
    #  texture = @@all_font_texture.get_sprite.get_texture
    #  
    #  texture.set_anti_alias_tex_parameters
    #  
    #end
    
    if @@first
      
      
      ct = 0
      canceled = true
      
      regenerate_proc = Proc.new do
        @@all_label.values.each do |l|
          l.release_text
        end
        
        @@all_font_textures.each do |aft|
          aft[:texture].release
        end
        
        #@@all_back_font_textures += @@all_font_textures
        @@all_font_textures = []
        @@all_line = {}
        @@all_chatacter = {}
        @@max_line = 0
      
        @@enable_set_text = true
        
        @@all_label.values.each do |l|
          l.set_text l.setted_text
        end
      end
      
      proc = Proc.new do
      
        Logger.debug "start regenerate"
      
        if ct == 0
          @@loading_st.call
        end
      
        canceled = false
        ct += 1
      
        Project.delay_call 0.1 do
        
          #Project.delay_call 0.3 do
          
            ct -= 1
            
            
            if ct <= 0
              #self.create_texture
              
              Texture2D.set_default_alpha_pixel_format Texture2DPixelFormat::BGRA8888
    
              aft = RenderTexture.create 32, 32#, 2, 35056
              aft.retain
              
              Texture2D.set_default_alpha_pixel_format Texture2DPixelFormat::RGBA4444
              
              Project.delay_call 0.1 do
                aft.release
                regenerate_proc.call
                
                Logger.debug "end regenerate"
                
                @@loading_ed.call
              end
              
            end
          
          #end
        end
      end
      
      
      el = EventListenerCustom.create "event_come_to_background" do |e|
        
        @@enable_set_text = false
        
        @@all_label.values.each do |l|
          l.store_z_order
          l.release_text
        end
        
        @@all_font_textures.each do |aft|
          aft[:texture].release
        end
        
        #@@all_back_font_textures += @@all_font_textures
        @@all_font_textures = []
        @@all_line = {}
        @@all_chatacter = {}
        @@max_line = 0
        
        canceled = true
        
        #proc.call
        
      end
      
      Director.get_instance.get_event_dispatcher.add_event_listener_with_fixed_priority(el, -1);
      
      el = EventListenerCustom.create "event_renderer_recreated" do |e|
        
      end
      
      Director.get_instance.get_event_dispatcher.add_event_listener_with_fixed_priority(el, -1);
      
      el = EventListenerCustom.create "event_come_to_foreground" do |e|
        
        proc.call
        
      end
      
      
      @@all_label[self.object_id] = self
      
      
      Director.get_instance.get_event_dispatcher.add_event_listener_with_fixed_priority(el, -1);
      
      @@first = false
    end
    
    self.font_name = options[:font_name] || "fonts/MTLc3m.ttf"
    self.edge_size = options[:edge_size] || 0
    self.bold_size = 0 #options[:bold_size] || 0
    self.font_size = options[:font_size] || 34
    self.color = options[:color] || Color3B.create(255, 255, 255)
    self.line_height = nil
    
    self.all_size = self.font_size + self.edge_size * 2
    
    self.node = Node.create
    
    r = CocosMrubyRef.create
    r.set_value self
    r.set_on_delete do
      self.release_text
      @@all_label.delete self.object_id
    end
    self.node.set_user_object r
    
    if options[:text]
      self.set_text options[:text]
    else
      self.set_text " "
    end
    
    
    
  end
  
  def self.all_font_textures
    @@all_font_textures
  end
  
  def self.last_label
    @@last_label
  end
  
  def self.on_loading_st(&block)
    @@loading_st = block
  end
  
  def self.on_loading_ed(&block)
    @@loading_ed = block
  end
  
  def make_label(c)
    label = Label.create_with_ttf c, self.font_name, self.font_size,
        Size.create(0, 0), 2, 0
    #config = label.get_ttf_config
    #config.outline_size = self.edge_size
    #label.set_ttf_config config
    label
  end
  
  def release_text
  
    if USE_LABEL_MODE
      
      return
    end
  
    
    if self.node.valid?
      self.node.remove_all_children
    end
    
    if self.text
      text.each_char do |c|
    
        key = [c, self.font_name, self.all_size]
      
        if @@all_chatacter[key]
          h = @@all_chatacter[key]
          h[:ref_count] -= 1
          
        end
      end
      self.text = nil
    end
  end
  
  def create_texture
    Logger.debug "pre create render texture"
  
    Texture2D.set_default_alpha_pixel_format Texture2DPixelFormat::BGRA8888
    
    if @@all_back_font_textures.empty?
      aft = RenderTexture.create WIDTH, WIDTH#, 2, 35056
      aft.retain
    else
      aft = @@all_back_font_textures.pop
    end
    
    aft.clear 0.0, 0.0, 0.0, 0.0
    
    
    
    @@all_font_textures << {
      :id => @@current_id,
      :texture => aft,
    }
    
    @@current_id += 1
    
    texture = aft.get_sprite.get_texture
    
    texture.set_anti_alias_tex_parameters
    
    @@max_line = 0
    
    Texture2D.set_default_alpha_pixel_format Texture2DPixelFormat::RGBA4444
    
    Logger.debug "post create render texture"
    
    #s = Sprite.create_with_texture texture
    #s.set_scale 0.5
    #@ca ||= 0
    #s.set_position 150 + @ca, 150 + @ca
    #@ca += 10
    #Project.get_current_scene.add_child s
    
    
    texture
  end
  
  def store_z_order
    @node_z = self.node.get_global_z_order
  end
  
  def set_text(text)
  
    if USE_LABEL_MODE
      
      @label.set_string text
      @label.set_position @label.get_bounding_box.size.width / 2, 0
      
      return
    end
  
    self.release_text
    
    self.text = text
    self.setted_text = text
    
    unless @@enable_set_text
      return
    end
    
    bw = self.bold_size * 2 + 1
    ew = self.edge_size * 2 + bw
    ew = 0 if self.edge_size <= 0
    
    
    
    render_textures = {}
    use_textures = {}
    
    text.each_char do |c|
    
      key = [c, self.font_name, self.all_size, self.edge_size, self.bold_size]
    
      if @@all_chatacter[key]
        
        h = @@all_chatacter[key]
        h[:ref_count] += 1
        char_h = h
      else
      
        
        
        @@all_line[self.all_size] ||= []
        a = @@all_line[self.all_size]
        
        generatable = a.find {|v| v[:left] < WIDTH - self.all_size}
        
        unless generatable
        
          if @@all_font_textures.empty? || (@@max_line + (self.all_size * 1.5).to_i + 1 > WIDTH)
        
            texture = self.create_texture
            
          else
            texture = @@all_font_textures.last[:texture].get_sprite.get_texture
          end
        
          h = {
            :chars => {},
            :left => 0,
            :top => @@max_line,
            :texture_info => @@all_font_textures.last,
          }
          texture_info = @@all_font_textures.last
          a << h
          @@max_line += (self.all_size * 1.5).to_i + 1
        else
          
          h = generatable
          texture_info = h[:texture_info]
        end
        
        texture = texture_info[:texture].get_sprite.get_texture
        
        texture_id = texture_info[:id]
        render_textures[texture_id] ||= {
          :texture => texture,
          :texture_info => texture_info,
          :labels => [],
        }
        labels = render_textures[texture_id][:labels]
        
        chars = h[:chars]
        
        label = self.make_label c
        bb = label.get_bounding_box
        
        
        wa = ((bb.size.width + 1) / 2).to_i * 2 + self.edge_size * 2
        ha = ((bb.size.height + 1) / 2).to_i * 2 + self.edge_size * 2 + 2
        
        char_h = {
          :key => key,
          :rect => Rect.create(h[:left], h[:top], wa, ha),
          :bb => bb,
          :ref_count => 1,
          :texture => texture,
          :texture_info => texture_info,
        }
        
        x = h[:left] + (wa / 2 - self.edge_size).to_i
        y = h[:top] + (ha / 2 - self.edge_size).to_i
        label.set_position x + self.edge_size, y + self.edge_size
        
        ew.times do |i|
          ew.times do |j|
            if (i == 0 && (j == 0 || j == ew - 1)) ||
              (i == ew - 1 && (j == 0 || j == ew - 1))
              next
            end
          
            lb = self.make_label c
            RtsObjectSystem.set_blending_premultipled lb
            lb.set_position x + i, y + j
            lb.set_color Color3B.create(0, 0, 0)
            #Project::set_label_blend_func lb
            labels << lb
          end
        end
        
        bw.times do |i|
          bw.times do |j|
            
          
            lb = self.make_label c
            RtsObjectSystem.set_blending_premultipled lb
            lb.set_position x + i + self.edge_size, y + j + self.edge_size
            lb.set_color Color3B.create(255, 255, 255)
            #Project::set_label_blend_func lb
            labels << lb
          end
        end
        
        char_h[:line_height] = label.get_line_height
        
        label.set_color Color3B.create(255, 255, 255)
        RtsObjectSystem.set_blending_premultipled label
        #Project::set_label_blend_func label
        #labels << label
        
        @@last_label = label
        
        chars[char_h] = char_h
        @@all_chatacter[key] = char_h
        
        h[:left] += wa + 1
        
      end
      
      use_textures[char_h[:texture_info][:id]] = char_h
    
    end
    
    
    render_textures.each do |k, v|
    
      labels = v[:labels]
      
      unless labels.empty?
        
        tmp_node = Node.create 
        
        labels.each do |label|
          tmp_node.add_child label
        end
        
        v[:texture_info][:texture].begin
        
        director = Director.get_instance
        
        tmp_node.set_position 0, 0
        2.times do
          tmp_node.visit
        end
        
        v[:texture_info][:texture].end
        
        v[:labels] = []
      end
      
    end
    
    l = 0
    t = 0
    
    batch_node_mode = true
    
    @node_z ||= self.node.get_global_z_order
    self.node.set_global_z_order @node_z
    
    if batch_node_mode
    
      batch_node_table = {}
      
      use_textures.each do |k, v|
      
        texture = v[:texture_info][:texture].get_sprite.get_texture
        sp = Sprite.create_with_texture texture
        dummy = SpriteBatchNode.create_with_texture texture, 29
        batch_node = SpriteBatchNode.create_with_texture texture, 100
        self.node.add_child batch_node
        
        batch_node.set_global_z_order @node_z
      
        batch_node_table[k] = {
          :sp => sp,
          :dummy => dummy,
          :batch_node => batch_node,
        }
      end
      
      #texture = @@all_font_textures.last[:texture].get_sprite.get_texture
      #sp = Sprite.create_with_texture texture
      #dummy = SpriteBatchNode.create_with_texture texture, 29
      #batch_node = SpriteBatchNode.create_with_texture texture, 100
      #self.node.add_child batch_node
      #
      #batch_node.set_global_z_order @node_z
      
    end
    
    ct = 0
    
    mxw = 0
    mxh = 0
    
    text.each_char do |c|
      
      key = [c, self.font_name, self.all_size, self.edge_size, self.bold_size]
    
      h = @@all_chatacter[key]
      
      self.line_height ||= self.all_size
      
      
      if c == "\n"# || c == "\r"
        t += self.line_height
        l = 0
        next
      end
      
      
      r = h[:rect]
      sf = SpriteFrame.create_with_texture h[:texture], r
      #sf = SpriteFrame.create_with_texture h[:texture], Rect.create(0, 0, WIDTH, WIDTH)
      if batch_node_mode
        bnh = batch_node_table[h[:texture_info][:id]]
        tl = bnh[:sp]
        tl.set_batch_node bnh[:dummy]
      else 
        tl = Sprite.create_with_sprite_frame sf
        
      end
      
      tl.set_sprite_frame_2 sf
      tl.set_position l + (r.size.width / 2).to_i + 0.5, t + 0.5
      tl.set_scale 1.0, -1.0
      tl.set_color self.color
      #RtsObjectSystem.setup_sprite_round tl
      l += r.size.width
      
      if batch_node_mode
        mxw = [mxw, l].max
        mxh = [mxh, t + r.size.height].max
        
        bnh[:batch_node].insert_quad_from_sprite tl, ct
        
      else
        RtsObjectSystem.setup_sprite_round tl
        self.node.add_child tl
      end
      
      
      
    end
    
    if batch_node_mode
      batch_node_table.each do |k, v|
        v[:batch_node].set_content_size Size.create(mxw, mxh)
      end
    end
    
  end

end

