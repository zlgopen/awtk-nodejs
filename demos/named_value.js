var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];

function application_init() {
  var v = TValue.create()
  var nv = TNamedValue.create()

  nv.setName("name")
  nv.setValue(v.setStr("hello"));

  console.log(nv.name + ':' + nv.getValue().str());

  nv = null;
  v = null;
  gc()
}

application_init();
