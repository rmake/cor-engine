include Cor

Project.load_eval "lib/cor_all.rb"



v = CorEigen::Vector3D.create
v.set 0, 6
v.set 1, 5
v.set 2, 4

Logger.debug "v #{3.times.map {|i| v.get i}}"

