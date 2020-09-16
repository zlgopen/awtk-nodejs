cp -fv ../awtk-binding/tools/code_gen/js/output/tk_nodejs.cc src/c/
cp -fv ../awtk-binding/tools/code_gen/js/output/awtk.js src/js

for f in ../awtk-binding/demos/js/*.js
do
  target="demos/"`basename $f`
  cat src/js/app_begin.js $f >$target

done

cat src/js/begin.js src/js/awtk.js src/js/end.js >awtk.js
