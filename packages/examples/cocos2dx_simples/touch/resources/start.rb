# namespaceを省略できるように
include Cor
include Cocos2d

# visible_sizeは画面の大きさ
director = Director.get_instance
visible_size = director.get_visible_size

# nd3.pngの一番左上の画像からspriteを作成する
f0 = SpriteFrame.create "nd3_anim.png", Rect.create(0, 0, 64, 64)
sprite = Sprite.create_with_sprite_frame f0

#左向きのアニメーション
a = []
a << SpriteFrame.create("nd3_anim.png", Rect.create(0, 128, 64, 64))
a << SpriteFrame.create("nd3_anim.png", Rect.create(64, 128, 64, 64))
left_animation = Animation.create_with_sprite_frames a, 0.1, -1
left_animation.retain #メモリーリークするので注意

#右向きのアニメーション
a = []
a << SpriteFrame.create("nd3_anim.png", Rect.create(0, 0, 64, 64))
a << SpriteFrame.create("nd3_anim.png", Rect.create(64, 0, 64, 64))
right_animation = Animation.create_with_sprite_frames a, 0.1, -1
right_animation.retain #メモリーリークするので注意

# touch event
listener = EventListenerTouchOneByOne::create

animation_action = nil
move_action = nil

listener.on_touch_began = Proc.new do |t, e|
  
  # タップした位置に移動
  lp = t.get_location
  if animation_action && animation_action.valid?
    sprite.stop_action animation_action
  end
  if move_action && move_action.valid?
    sprite.stop_action move_action
  end
  if sprite.get_position.x < lp.x
    animation_action = sprite.run_action(Animate.create(left_animation))
  else
    animation_action = sprite.run_action(Animate.create(right_animation))
  end
  
  move_action = sprite.run_action MoveTo.create(2, lp)

end

ed = Project.get_current_layer.get_event_dispatcher
ed.add_event_listener_with_scene_graph_priority listener, sprite

# 画面の中心に配置
sprite.set_position visible_size.width / 2, visible_size.height / 2

# Layerのノードに追加することで表示される
Project.get_current_layer.add_child sprite

