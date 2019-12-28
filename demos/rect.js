var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];
function application_init() {
  var r = TRect.create(1, 2, 3, 4);

  console.log(r.x);
  console.log(r.y);
  console.log(r.w);
  console.log(r.h);

  r.set(10, 20, 30, 40);

  console.log(r.x);
  console.log(r.y);
  console.log(r.w);
  console.log(r.h);

  r = null;
  gc();
}

application_init();
