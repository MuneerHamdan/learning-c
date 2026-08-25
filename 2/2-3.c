#include <stdio.h>
/*
 * 2-3.c 
 * Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.
 */

int main(void) {
  // v = (4/3)(pi)(r^3)

  int r = 1;
  fscanf(stdin, "%d", &r);
  int rr = r * r, rrr = rr * r;
  const double pi = 3.14159265358979;
  printf("%.14f\n", ((4.0f / 3.0f) * pi * rrr));

  return 0;
}
