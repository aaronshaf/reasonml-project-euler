// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Pervasives = require("bs-platform/lib/js/pervasives.js");

var prev1 = [2];

var prev2 = [4];

var sum = [6];

while(sum[0] < 4000000) {
  prev1[0] = prev2[0];
  prev2[0] = sum[0];
  sum[0] = prev1[0] + prev2[0] | 0;
  console.log(Pervasives.string_of_int(sum[0]));
};

var max = 4000000;

exports.max   = max;
exports.prev1 = prev1;
exports.prev2 = prev2;
exports.sum   = sum;
/*  Not a pure module */
