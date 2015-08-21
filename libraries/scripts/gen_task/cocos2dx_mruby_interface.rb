
MrubyBindingGen.name "cor_cocos2dx_mruby"
MrubyBindingGen.namespace "cocos2dx_mruby_interface"
MrubyBindingGen.output_path "../cor_cocos2dx_mruby_interface/sources/cocos2dx_bind"
MrubyBindingGen.add_cor_lib_list([
  'cor_mruby_interface',
  'cor_cocos2dx_converter',
  'cor_cocos2dx_mruby_interface',
])

load "gen_info/cocos2dx_mruby_interface.rb"
require "inc_path.rb"

MrubyBindingGen.add_include_paths COCOS2DX_INCPATH + [
  "#{COCOS2DX_PATH}/external/win32-specific/gles/include/OGLES",
  "#{COCOS2DX_PATH}/external/glfw3/include/win32",
]
MrubyBindingGen.add_include_files([
  "#{COCOS2DX_PATH}/cocos/cocos2d.h",
  "#{COCOS2DX_PATH}/cocos/ui/UIEditBox/UIEditBox.h",
  #"#{COCOS2DX_PATH}/extensions/cocos-ext.h",
  "#{COCOS2DX_PATH}/extensions/GUI/CCScrollView/CCScrollView.h",
  "#{COCOS2DX_PATH}/cocos/audio/include/SimpleAudioEngine.h",
  "../cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h",
])
