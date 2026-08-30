/*
 * 3-1.c
 *
 * Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered the date 20110217
 */
#include <stdio.h>
int main(void) {
  int month, date, year;
  printf("Enter a date (mm/dd/yyyy): ");
  fscanf(stdin, "%d/%d/%d", &month, &date, &year);
  printf("You entered the date %d%.2d%.2d\n", year, month, date);
  return 0;
}
