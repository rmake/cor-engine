
CorTestCase.run "Vector3d.constructor" do |t|

  v0 = CorEigen::Vector3D.create 1, 2, 3

  t.check_equal v0.get(0), 1
  t.check_equal v0.get(1), 2
  t.check_equal v0.get(2), 3

  v1 = CorEigen::Vector3D.create v0

  t.check_equal v1.get(0), 1
  t.check_equal v1.get(1), 2
  t.check_equal v1.get(2), 3

  v2 = CorEigen::Vector3D.create v1.get_original

  t.check_equal v2.get(0), 1
  t.check_equal v2.get(1), 2
  t.check_equal v2.get(2), 3

  t.do_end

end


CorTestCase.run "Vector3d.set/get" do |t|

  v = CorEigen::Vector3D.create
  v.set 0, 6
  v.set 1, 5
  v.set 2, 4

  t.check_equal v.get(0), 6
  t.check_equal v.get(1), 5
  t.check_equal v.get(2), 4

  t.do_end

end

CorTestCase.run "Vector3d.+" do |t|

  v0 = CorEigen::Vector3D.create
  v0.set 0, 6
  v0.set 1, 5
  v0.set 2, 4

  v1 = CorEigen::Vector3D.create 3, 3, 4

  v2 = v0 + v1

  t.check_equal v2.get(0), 9
  t.check_equal v2.get(1), 8
  t.check_equal v2.get(2), 8

  t.do_end

end

