

class ImportCodeTest

  def initialize
  
    v = ImportTest.add 3, 7
  
    Logger.debug "ImportTest.add 3, 7 -> #{v}"
    
    CorMessageView.simple_show "ImportTest.add 3, 7 -> #{v}"
  
  end
  
end
