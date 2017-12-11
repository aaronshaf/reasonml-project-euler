// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var List    = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");

function range(x, y) {
  var match = +(x >= y);
  if (match !== 0) {
    return /* [] */0;
  } else {
    return /* :: */[
            x,
            range(x + 1 | 0, y)
          ];
  }
}

var from1To1000 = range(1, 1000);

var multiples = List.filter((function (int1) {
          if (int1 % 3) {
            return +(int1 % 5 === 0);
          } else {
            return /* true */1;
          }
        }))(from1To1000);

console.log($$Array.of_list(multiples));

exports.range       = range;
exports.from1To1000 = from1To1000;
exports.multiples   = multiples;
/* from1To1000 Not a pure module */