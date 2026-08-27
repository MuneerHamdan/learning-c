/*
 * 2-6
 *
 * Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:
 * ((((3x + 2)x – 5)x – 1)x + 7)x – 6
 * Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner’s Rule.
 */

#include <stdio.h>
int main(void) {
  printf("((((3x + 2)x – 5)x – 1)x + 7)x – 6\n");
  printf("what x: ");
  int x;
  fscanf(stdin, "%d", &x);
  int horners = -6;
  horners += x*x + 7*x;
  horners += x*x - 1*x;
  horners += x*x - 5*x;
  horners += 3*x*x + 2*x;

  printf("((((3(%d) + 2)(%d) – 5)(%d) – 1)(%d) + 7)(%d) – 6 = %d\n", x, x, x, x, x, horners); 
  return 0;
}
