
include Cor

Project.load_eval "lib/cor_all.rb"

Project.load_eval "game/majitai_menu.rb"
Project.load_eval "game/majitai_game.rb"
Project.load_eval "game/majitai_result.rb"

MajitaiMenu.new
