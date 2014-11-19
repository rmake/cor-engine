
class SoundTest

  def initialize
    
    SimpleAudioEngine.get_instance.play_effect "sound/bomb.wav", false, 1.0, 0.0, 1.0
    
    
  end

end

SoundTest.new


