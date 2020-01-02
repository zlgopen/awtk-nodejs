var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];

function application_init() {
  console.log(TTimeNow.s());
  console.log(TTimeNow.ms());

  var dt = TDateTime.create();

  console.log(dt.year);
  console.log(dt.month);
  console.log(dt.day);
  console.log(dt.hour);
  console.log(dt.minute);
  console.log(dt.second);

  dt = null;
}

application_init();
