/* "By considering the terms in the Fibonacci sequence whose values
   do not exceed four million, find the sum of the even-valued terms." */
let max = 4000000;

let rec fibonacciTermsBelowMax = (prev1, prev2) => {
  let sum = prev1 + prev2;
  if (sum > max) {
    [prev1, prev2]
  } else {
    [sum, ...fibonacciTermsBelowMax(prev2, sum)]
  }
};

let allTerms = fibonacciTermsBelowMax(2, 4);

Js.log(allTerms |> Array.of_list);
