/*

3-4.c

Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx:

Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/
#include <stdio.h>
int main(void) {
  int one, two, three;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  fscanf(stdin, "(%d) %d-%d", &one, &two, &three);
  printf("You entered %d.%d.%d\n", one, two, three);
  return 0;
}
