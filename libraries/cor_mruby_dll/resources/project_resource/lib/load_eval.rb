
module Cor

  class Project

    def self.load_eval file_name
      CorMrubyInterface::MrubyLoader.load_eval file_name
    end

  end

end




