/* "Find the sum of all the multiples of 3 or 5 below 1000." */
/* rec means recursive: https://reasonml.github.io/guide/language/function/
   hat tip: glennsl */
let rec range = (x, y) => x >= y ? [] : [x, ...range(x + 1, y)];

let from1To1000 = range(1, 1000);

/* ^ Is there a ReasonML analogue to lodash? Say, for example,
   I wanted to do range, but with a standard lib or utility lib?
   thangngoc89 suggests https://github.com/jonlaing/rationale */
/* See https://reasonml.github.io/api/List.html */
let multiples =
  List.filter(
    (int1: int) => int1 mod 3 === 0 || int1 mod 5 === 0,
    from1To1000
  );

Js.log(multiples |> Array.of_list);
