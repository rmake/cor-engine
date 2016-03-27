include Cor
Project.load_eval "lib/cor_all.rb"
Project.load_eval "cor_eigen_test/vector3.rb"

info_text = CorTestCase.log_result
CorMessageView.simple_show info_text
