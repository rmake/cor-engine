
Project.load_eval "release_sample/r001/r001.rb"

class ReleaseSampleMenu

  def initialize
  
    list = [
      {
        :text => "r001/r001.rb",
        :proc => (Proc.new do
          R001.new
        end),
      },
    ]
    
    CorSimpleMenu.create_and_show list
  
  end


end

