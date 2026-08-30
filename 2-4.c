/*
 * 2-4
 *
 * Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
 * Enter an amount: 100.00
 * With tax added: $105.00
 */

#include <stdio.h>
int main(void) {
  printf("Enter an amount: ");
  float amount;
  fscanf(stdin, "%f", &amount);
  amount += amount * 0.05;
  printf("With tax added: $%.2f\n", amount);
  return 0;
}
