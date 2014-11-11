cor-engine
==========

# what is code on rmake engine (cor-engine)

this is library for making game.

- mruby binding generator
- cocos2d-x 3.2
- some utilities

# status

experimental, need refactoring and reconstructing.

# development environment

I confirm this on windows 8.1, Android, OSX, iOS(simulator).

## common

- cocos2d-x development environment

## windows
 
- visual studio 2013
- MingW, msys (maybe cygwin also ok)
   - mingw64 exception=sjlj http://sourceforge.net/projects/mingw-w64/
   - using shell command and build tests
- Clang for windows binary
   - using for generating mruby binding
- ruby for windows
   - utilities

### building android application on windows

- Android SDK, NDK

## osx, ios

- ruby


# build sample project

## windows msys command line

```
git clone git@github.com:rmake/cor-engine.git
cd cor-engine
ruby scripts/init_work/start_day_work.rb

# copy script resources
cd projects/project_script
echo "SOURCE_PATH = \"../majitai_running\"" > project_source_path_local_conf.rb
ruby copy_project.rb
cd ../../

# build on windows
cd projects/deploy_script
ruby deploy_win.rb
build_tmp/rts_test_win/cor_lib_test_main.exe

```

## windows visual studio debug

- open "projects/cor_lib_test_main/proj.win32/cor_lib_test_main.sln"
- write text file to "projects/project_script/project_source_path_local_conf.rb"
```
SOURCE_PATH = "../majitai_running"
```
- select Debug target
- press F5 key
   - copy_project.rb called on debug-built application
