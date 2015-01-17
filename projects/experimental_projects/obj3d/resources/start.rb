# namespaceを省略できるように
include Cor
include Cocos2d

# visible_sizeは画面の大きさ
director = Director.get_instance
visible_size = director.get_visible_size

# nd3.png画像からspriteを作成する
sprite = Sprite3D.create "box.obj"

# 画面の中心に配置
sprite.set_position3_d Vec3.create(visible_size.width / 2, visible_size.height / 2, 0.0)
sprite.set_scale 100.0
sprite.set_rotation3_d Vec3.create(45, 45, 45)

# Layerのノードに追加することで表示される
Project.get_current_layer.add_child sprite

