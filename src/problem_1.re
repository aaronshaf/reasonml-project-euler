/* Find the sum of all the multiples of 3 or 5 below 1000. */
/* https://projecteuler.net/problem=1 */

/* thanks to glennsl */
/* rec means recursive */
let rec range = (x, y) => x >= y ? [] : [x, ...range(x + 1, y)];

let from1To1000 = range(1, 1000);
let multiples = List.filter(
  (int1: int) => (int1 mod 3 === 0 || int1 mod 5 === 0),
  from1To1000
);

Js.log(multiples |> Array.of_list)
