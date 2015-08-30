include Cor
include CorProjectStructure
Project.load_eval "lib/cor_all.rb"

v = SimpleClass.add 3, 7

Logger.debug "SimpleClass.add 3, 7 -> #{v}"


c = SimpleClass.create
c.set_a 5
Logger.debug "SimpleClass.get_a 5 -> #{c.get_a}"

CorMessageView.simple_show "ImportTest.add 3, 7 -> #{v}"
CorMessageView.simple_show "SimpleClass.get_a 5 -> #{c.get_a}"

