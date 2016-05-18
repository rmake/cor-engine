

patterns = [
  {
    :name => "Vector3D",
    :cls => CorEigen::Vector3D,
  },
  {
    :name => "Vector3F",
    :cls => CorEigen::Vector3F,
  },
]

patterns.each do |h|
  name = h[:name]
  cls = h[:cls]
  CorTestCase.run "#{name}.constructor" do |t|

    v0 = cls.new 1, 2, 3

    t.check_equal v0.get(0), 1
    t.check_equal v0.get(1), 2
    t.check_equal v0.get(2), 3

    v1 = cls.new v0

    t.check_equal v1.get(0), 1
    t.check_equal v1.get(1), 2
    t.check_equal v1.get(2), 3

    v2 = cls.new v1.get_original

    t.check_equal v2.get(0), 1
    t.check_equal v2.get(1), 2
    t.check_equal v2.get(2), 3

    t.do_end

  end


  CorTestCase.run "#{name}.set/get" do |t|

    v = cls.new
    v.set 0, 6
    v.set 1, 5
    v.set 2, 4

    t.check_equal v.get(0), 6
    t.check_equal v.get(1), 5
    t.check_equal v.get(2), 4

    t.do_end

  end

  CorTestCase.run "#{name}.get_x/y/z" do |t|

    v = cls.new
    v.set 0, 6
    v.set 1, 5
    v.set 2, 4

    t.check_equal v.get_x, 6
    t.check_equal v.get_y, 5
    t.check_equal v.get_z, 4

    t.do_end

  end

  CorTestCase.run "#{name}.set_x/y/z" do |t|

    v = cls.new
    v.set_x 6
    v.set_y 5
    v.set_z 4

    t.check_equal v.get(0), 6
    t.check_equal v.get(1), 5
    t.check_equal v.get(2), 4

    t.do_end

  end

  CorTestCase.run "#{name}.+" do |t|

    v0 = cls.new
    v0.set 0, 6
    v0.set 1, 5
    v0.set 2, 4

    v1 = cls.new 3, 3, 4

    v2 = v0 + v1

    t.check_equal v2.get(0), 9
    t.check_equal v2.get(1), 8
    t.check_equal v2.get(2), 8

    t.do_end

  end

  CorTestCase.run "#{name}.-" do |t|

    v0 = cls.new
    v0.set 0, 6
    v0.set 1, 5
    v0.set 2, 4

    v1 = cls.new 3, 3, 4

    v2 = v0 - v1

    t.check_equal v2.get(0), 3
    t.check_equal v2.get(1), 2
    t.check_equal v2.get(2), 0

    t.do_end

  end

  CorTestCase.run "#{name}.*" do |t|

    v0 = cls.new
    v0.set 0, 6
    v0.set 1, 5
    v0.set 2, 4

    v2 = v0 * 2

    t.check_equal v2.get(0), 12
    t.check_equal v2.get(1), 10
    t.check_equal v2.get(2), 8

    t.do_end

  end

  CorTestCase.run "#{name}.-(self)" do |t|

    v0 = cls.new
    v0.set 0, 6
    v0.set 1, 5
    v0.set 2, 4

    v2 = -v0

    t.check_equal v2.get(0), -6
    t.check_equal v2.get(1), -5
    t.check_equal v2.get(2), -4

    t.do_end

  end

end



