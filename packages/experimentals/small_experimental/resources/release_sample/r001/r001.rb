
Project.load_eval "release_sample/r001/operator_sample.rb"
Project.load_eval "release_sample/r001/enum_constant_sample.rb"

class R001

  def initialize
  
    list = [
      {
        :text => "operator.rb",
        :proc => (Proc.new do
          OperatorSample.new
        end),
      },
      {
        :text => "enum_cnstant_sample.rb",
        :proc => (Proc.new do
          EnumConstantSample.new
        end),
      },
    ]
    
    CorSimpleMenu.create_and_show list
  
  end

end

