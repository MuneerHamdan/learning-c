/*
 * 3-2.c
 *
 * Write a program that formats product information entered by the user. A session with the program should look like this:
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 * Item    Unit       Purchase
 *         Price      Date
 * 583     $ 13.50    10/24/2010
 * The item number and date should be left justified; the unit price should be right justified.
 * Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
 */

#include <stdio.h>
int main(void) {
  float item, price, m, d, y;
  printf("Enter item number: ");
  fscanf(stdin, "%f", &item);
  printf("Enter unit price: ") ;
  fscanf(stdin, "%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  fscanf(stdin, "%f/%f/%f", &m, &d, &y);
  printf("Item\tUnit\t\tPurchase\n");
  printf("\tPrice\t\tDate\n");
  printf("%.0f\t$ %4.2f\t\t%.0f/%.0f/%.0f\n", item, price, m, d, y);
  return 0;
}
