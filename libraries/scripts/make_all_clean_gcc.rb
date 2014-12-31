
paths = ["../cor_type","../cor_data_structure","../cor_algorithm","../cor_system","../cor_mruby_interface"]

ts = []

flag = ""
if RUBY_PLATFORM.include? "mswin32"
    flag = "WINDOWS=TRUE"
else
    flag = "-j 4"
    #flag = "-j 4 CLANG=TRUE"
end

paths.each do |path|
  ts << Thread.new do
    print "Start build\n"
    system("make -C #{path}/proj.gcc #{flag} clean")
    print "End build\n"
  end
end

ts.each do |t|
  t.join
end


