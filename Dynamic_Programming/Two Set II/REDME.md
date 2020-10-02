## Hint
* if sum of n digits is odd then ans is 0.
* else we need to get the number of get half sum using digits 1 to n
  * above problem can be solved using DP
  * since our dp solution give answer twice the actual answer, thus we have to divide it by 2
  * since we did modulo by (1e9)+7 while calculating the answer, we have to multiply it mod inverse of 2 under given modulo
  * it is equal to 500000004
