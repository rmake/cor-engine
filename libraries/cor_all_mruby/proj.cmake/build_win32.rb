$LOAD_PATH.push('.')
require "build_common"

init_build "build_win32", "Visual Studio 14 2015 Win64"
do_build


