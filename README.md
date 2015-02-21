cor-engine
==========

# What is cor-engine(code on rmake engine)?

This is framework for making game.

- mruby binding generator
- cocos2d-x 3.4
- some utilities

# Status

Experimental, needed refactoring and reconstructing.

# Development environment

I confirm this on windows 8.1, Android, OSX, iOS(simulator).

## Common

- cocos2d-x development environment


## Windows with prebuilt

You can download prebuilt binary.

https://github.com/rmake/cor-engine/releases

You edit start.rb.

## Windows

- visual studio 2013
- MingW, msys (maybe cygwin also ok)
   - mingw64 exception=sjlj http://sourceforge.net/projects/mingw-w64/
   - using shell command and build tests
- Clang for windows binary
   - using for generating mruby binding
- ruby for windows
   - utilities

### Building android application on windows

- Android SDK, NDK

## OSX, iOS

- ruby


# Build sample project

## Windows msys command line

```
git clone git@github.com:rmake/cor-engine.git
cd cor-engine
ruby scripts/init_work/start_day_work.rb

# copy resources
cd projects/project_script
echo "SOURCE_PATH = \"../majitai_running\"" > project_source_path_local_conf.rb
ruby copy_project.rb
cd ../../

# build on windows
cd projects/deploy_script
ruby deploy_win.rb
cd build_tmp/rts_test_win/
cor_lib_test_main.exe

```

## Windows visual studio debug

- open "projects/cor_lib_test_main/proj.win32/cor_lib_test_main.sln"
- write text file to "projects/project_script/project_source_path_local_conf.rb"
```
SOURCE_PATH = "../majitai_running"
```
- select Debug target
- press F5 key
   - copy_project.rb called on debug-built application


# Folder structure

```
external
  external codes
external/mruby_build
  build mruby script
libraries
  library codes
libraris/scripts
  code generator and utility scripts
licensies
  license files of software used by cor-engine
projects
  application source files
projects/cor_lib_test_main
  cocos2d-x project which builds cor-engine application 
projects/deploy_script
  release script of cor-engine application 
projects/project_script
  copy resources to projects/cor_lib_test_main
projects/cocos2dx_simple
  simple code using cocos2d-x api with mruby
projects/majitai_running
  simple game code
scripts
  scripts for this repository
tests
  test codes
```

