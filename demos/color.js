var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];
function application_init() {
  var c = TColor.create(1, 2, 3, 4);

  console.log(c.r());
  console.log(c.g());
  console.log(c.b());
  console.log(c.a());

  c.fromStr("gold");

  console.log(c.r());
  console.log(c.g());
  console.log(c.b());
  console.log(c.a());
  c = null;

  gc();
}

application_init();
