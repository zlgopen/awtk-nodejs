var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];
