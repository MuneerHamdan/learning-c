/*
 * 2-7
 *
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

#include <stdio.h>
int main(void) {
  printf("Enter a dollar amount: ");
  int x;
  fscanf(stdin, "%d", &x);
  int a = 0, b = 0, c = 0, d = 0, e = 0;
  int f = 0;
  int g = 0;
  int h = 0;
  a = x / 20;
  b = x - (a*20);
  c = b / 10;
  d = b - (c*10);
  e = d / 5;
  f = d - (e*5);
  g = f / 1;
  h = f - (g*1);
  printf("%d ", a);
  printf("%d ", b);
  printf("%d ", c);
  printf("%d ", d);
  printf("%d ", e);
  printf("%d ", f);
  printf("%d ", g);
  printf("%d ", h);
  return 0;
}
