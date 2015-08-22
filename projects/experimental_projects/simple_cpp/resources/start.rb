include Cor
Project.load_eval "lib/cor_all.rb"

v = SimpleClass.add 3, 7

Logger.debug "ImportTest.add 3, 7 -> #{v}"

CorMessageView.simple_show "ImportTest.add 3, 7 -> #{v}"

