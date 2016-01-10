$LOAD_PATH.push('.')
require "build_common"

init_build "build/win32", "Visual Studio 14 2015"
do_build


