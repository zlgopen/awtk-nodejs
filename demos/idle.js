var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];

var count = 0;
TIdle.add(function() {
  console.log(count);
  if(count < 10) {
    count += 1;
    return TRet.REPEAT;
  } else {
    return TRet.OK;
  }
});
