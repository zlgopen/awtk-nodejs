var awtkStepId = 0;

function awtkStep() {
  if(!awtk.step()) {
    clearInterval(awtkStepId);
    console.log("awtk quit");
    awtkStepId = 0;
  }
}

exports.init = function(w, h, title) {
  awtk.init(w, h, title);
  awtkStepId = setInterval(awtkStep, 16);

  return exports;
}

