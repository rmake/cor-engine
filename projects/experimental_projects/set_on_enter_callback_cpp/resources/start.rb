

# visible_sizeは画面の大きさ
visible_size = Director.get_instance.get_visible_size

# spriteを作って受け取る
sprite = Cocos2dxExperimental.set_on_enter_callback_create

# 画面の中心に配置
sprite.set_position visible_size.width / 2, visible_size.height / 2

# layerのノードに追加することで表示される
Project.get_current_layer.add_child sprite


