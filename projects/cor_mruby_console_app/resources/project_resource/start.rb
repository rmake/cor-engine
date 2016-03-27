include Cor
include CorSystem
Project.load_eval "lib/test/cor_test_case.rb"
Project.load_eval "vector3.rb"

info_text = CorTestCase.log_result
Logger.info info_text
