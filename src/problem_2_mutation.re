/* "By considering the terms in the Fibonacci sequence whose values
   do not exceed four million, find the sum of the even-valued terms." */
let max = 4000000;

/* ref and ^: https://reasonml.github.io/guide/language/mutation */
let prev1 = ref(2);

let prev2 = ref(4);

let sum = ref(6);

/* let terms = ref([2, 4, 6]); */
while (sum^ < max) {
  prev1 := prev2^;
  prev2 := sum^;
  sum := prev1^ + prev2^;
  /* terms := [sum^, ...terms^]; <-- needed if we we want ot get sum of all terms */
  Js.log(string_of_int(sum^))
};
/* TODO: find sum of *all* terms? or is that not what the problem calls for... */
