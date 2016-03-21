
CorTestCase.run "Vector3d.set/get" do |t|

  v = CorEigen::Vector3D.create
  v.set 0, 6
  v.set 1, 5
  v.set 2, 4

  t.check_equal v.get(0), 6
  t.check_equal v.get(1), 5
  t.check_equal v.get(2), 4

  Logger.debug "v.get(0) #{v.get(0)}"

  t.do_end

end

