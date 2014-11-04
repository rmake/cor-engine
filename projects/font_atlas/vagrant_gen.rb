
$LOAD_PATH.push('.')

status = `sh -c "cd ~; vagrant status"`
puts status

running = status.match(/default\s*running/)
unless running 
  puts `sh -c "cd ~; vagrant up"`
end

puts `ssh default "source ~/.bash_profile; cd /cocos2dx/cor-client/projects/font_atlas; time ruby gen.rb"`
puts `ssh default "source ~/.bash_profile; cd /cocos2dx/cor-client/projects/font_atlas; time ruby gen_tempesta.rb"`


unless running 
  puts `sh -c "cd ~; vagrant halt"`
end






