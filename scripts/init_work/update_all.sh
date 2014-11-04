
cd ../../

git submodule init
git submodule update

#
cd external/mruby

git checkout work

git submodule init
git submodule update

#git pull origin work
git fetch
git reset --hard origin/work

cd ../../

#
cd external/mrubybind

git checkout devel

git submodule init
git submodule update

#git pull origin devel
git fetch
git reset --hard origin/devel

cd ../../

