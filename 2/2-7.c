/*
 * 2-7
 *
 * Write howmanytimes program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
 * Enter howmanytimes dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

#include <stdio.h>
int main(void) {
  printf("Enter a dollar amount: ");
  int num = 20;
  int original;
  int howmany;
  int remainder;
  fscanf(stdin, "%d", &original);
  while (num > 0) {
    howmany = original / num;
    remainder = original % num;
    printf("$%d bills: %d\n", num, howmany);
    original = remainder;
    if (num / 5 == 1) num = 1;
    else num = num / 2;
  }
  return 0;
}
