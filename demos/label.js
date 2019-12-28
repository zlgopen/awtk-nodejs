var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);
  var label = TLabel.create(win, 0, 0, 0, 0);

  label.useStyle('big_green');
  label.setText("hello awtk!");
  label.setSelfLayoutParams("center", "middle", "50%", "30");

  win.layout();
}

applicationInit()
