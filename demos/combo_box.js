var awtk = require('../awtk').init(320, 480, 'Hello-AWTK');
for(key in awtk)  global[key] = awtk[key];
function createComboBox(win, name, options, index, x, y, w, h) {
  var box = TComboBox.create(win, x, y, w, h);

  box.on(TEventType.VALUE_CHANGED, function(evt) { 
    console.log(box.name + ' changed: ' + (box.value))
    return TRet.OK;
  });

  box.setName(name);
  box.setOptions(options);
  box.setSelectedIndex(index);

  return box;
}

function applicationInit() {
  var win = TWindow.create(null, 0, 0, 0, 0);

  var box1 = createComboBox(win, 'color', 'Red;Green;Blue', 0, 10, 10, 168, 30);
  var box2 = createComboBox(win, 'zlg', '0.Zzzzzzzz;1.Lzzzzzzz;2.Gzzzzzzz', 1, 10, 50, 168, 30);
  var box3 = createComboBox(win, 'awtk', '', 1, 10, 90, 168, 30);
  
  box3.appendOption(10, 'Aaaaaaa');
  box3.appendOption(20, 'Waaaaaa');
  box3.appendOption(30, 'Taaaaaa');
  box3.appendOption(40, 'Kaaaaaa');
  box3.setSelectedIndex(3);

  win.layout();
}

applicationInit()


