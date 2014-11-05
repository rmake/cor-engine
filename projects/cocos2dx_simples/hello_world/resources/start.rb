
# visible_sizeは画面の大きさ
director = Director.get_instance
visible_size = director.get_visible_size

# "Marker Felt.ttf"というフォントファイルからラベルを作り, "hello world."という文字列を描画するlabelを作る。24は文字のポイント数。
# それより後の後ろの引数はデフォルトの値
label = Label.create_with_ttf "hello world.", "fonts/Marker Felt.ttf", 24, Size.create(0, 0), 0, 0

# 画面の中心に配置
label.set_position visible_size.width / 2, visible_size.height / 2

# Sceneのノードに追加することで表示される
Project.get_current_scene.add_child label

