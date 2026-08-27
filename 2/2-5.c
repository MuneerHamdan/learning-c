/*
 * 2-5
 *
 * Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
 * 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6
 * Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)
 */

#include <stdio.h>
int main(void) {
  printf("3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6\n");
  printf("what x: ");
  int x;
  fscanf(stdin, "%d", &x);
  printf("3(%d)^5 + 2(%d)^4 – 5(%d)^3 – (%d)^2 + 7(%d) – 6 = %d\n", x, x, x, x, x, ((3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - (6))); 
  return 0;
}
