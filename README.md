cor-engine
==========

# What is cor-engine(code on rmake engine)?

This is framework for making game.

- mruby binding generator
- cocos2d-x 3.6
- some utilities

# Status

Experimental, needed refactoring and reconstructing.

# Development environment

I confirm this on windows 8.1, Android, OSX, iOS(simulator).

## Common

- cocos2d-x development environment
- cmake

## Windows with prebuilt

You can download prebuilt binary.

https://github.com/rmake/cor-engine/releases

You edit start.rb.

## Windows

- visual studio 2015
- msys2
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

cd packages/examples/majitai_running
ruby make.rb win32 debug run

```



