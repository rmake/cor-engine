
class MyObject
  def self.create
    # nd3.pngの一番左上の画像からspriteを作成する
    f0 = SpriteFrame.create "nd3_anim.png", Rect.create(0, 0, 64, 64)
    sprite = Sprite.create_with_sprite_frame f0

    # sceneに追加されて最初に呼ばれる(add_childのあとくらい？) <- なくていい
    #sprite.set_on_enter_callback do
      
      sprite.run_action RotateBy.create(100, 360.0 * 100)
      
    #end
    
    sprite

  end
end

# visible_sizeは画面の大きさ
visible_size = Director.get_instance.get_visible_size

# spriteを作って受け取る
sprite = MyObject.create

# 画面の中心に配置
sprite.set_position visible_size.width / 2, visible_size.height / 2

# layerのノードに追加することで表示される
Project.get_current_layer.add_child sprite


