
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

# sceneに追加されて最初に呼ばれる(add_childのあとくらい？)
sprite.set_on_enter_callback do
  
  animation_action = nil
  
  # 移動とアニメーションの切り替え
  move_sequence = [
    CallFunc.create {
      if animation_action && animation_action.valid?
        sprite.stop_action animation_action
      end
      animation_action = sprite.run_action(Animate.create(left_animation))
    },
    MoveBy.create(2, Vec2.create(100, 0)),
    CallFunc.create {
      if animation_action && animation_action.valid?
        sprite.stop_action animation_action
      end
      animation_action = sprite.run_action(Animate.create(right_animation))
    },
    MoveBy.create(2, Vec2.create(-100, 0)),
  ]
  
  # 移動の開始、ずっと続ける
  move_action = sprite.run_action RepeatForever.create(Sequence.create(move_sequence))

end

# 画面の中心に配置
sprite.set_position visible_size.width / 2, visible_size.height / 2

# layerのノードに追加することで表示される
Project.get_current_layer.add_child sprite

