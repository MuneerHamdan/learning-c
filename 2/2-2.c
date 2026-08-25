#include <stdio.h>
/*
 * 2-2.c 
 * Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself twice to compute r^3.
 */

int main(void) {
  // v = (4/3)(pi)(r^3)

  const int r = 10, rr = r * r, rrr = rr * r;
  const double pi = 3.14159265358979;
  printf("%.14f\n", ((4.0f / 3.0f) * pi * rrr));

  return 0;
}
