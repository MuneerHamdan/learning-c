/*

3-5.c

Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals:

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), the numbers are said to form a magic square. The magic square shown here appears in a 1514 engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the last row give the date of the engraving.)

*/
#include <stdio.h>
int main(void) {
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
  int rs1, rs2, rs3, rs4;
  int cs1, cs2, cs3, cs4;
  int ds1, ds2, ds3, ds4;
  printf("Enter the numbers from 1 to 16 in any order:\n");
  fscanf(stdin, "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
  printf("\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

  rs1 = a+b+c+d;
  rs2 = e+f+g+h;
  rs3 = i+j+k+l;
  rs4 = m+n+o+p;
  printf("Row sums: %d %d %d %d\n", rs1, rs2, rs3, rs4);

  cs1 = a+e+i+m;
  cs2 = b+f+j+n;
  cs3 = c+g+k+o;
  cs4 = d+h+l+p;
  printf("Column sums: %d %d %d %d\n", cs1, cs2, cs3, cs4);

  ds1 = a+f+k+p;
  ds2 = d+g+j+m;
  ds3 = p+k+f+a;
  ds4 = m+j+g+d;
  printf("Diagonal sums: %d %d %d %d\n", ds1, ds2, ds3, ds4);
  return 0;
}
