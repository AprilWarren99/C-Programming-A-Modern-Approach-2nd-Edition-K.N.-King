#include <stdio.h>
/*
 * Implement the 13 digit European Artical Number (EAn)
 * Rules to calculate the checksum:
 *  Add first, third, fifth, seventh, ninth, eleventh and thirteeth digits.
 *  Add second, fourth, sixth, eigth, tength, twelfth digits.
 *  Multiply the second sum buy 3 and add it to the first sum.
 *  Subtract 1 from the total.
 *  Compute the remainder when the adjusted total is divided by 10.
 *  subtract the remainder from 9.
 */
int main(void){
  printf("Enter an 11 digit UPC code: ");
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13;
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13);
  int firstSum = num1 + num3 + num5 + num7 + num9 + num11;
  printf("First sum: %d\n", firstSum);
  int secondSum = num2 + num4 + num6 + num8 + num10 + num12;
  printf("Second sum: %d\n", secondSum);
  int checksum = 9 - ((((secondSum * 3) + firstSum) - 1) % 10);
  printf("The checksum is %d\n", checksum);
}
