#include <stdio.h>
/*
 * Rewrite upc.c in Section 4.1 so that the user enters 11 digits at one time. 
 * * This is found on page 57 of the book.
 * Ruls to calculate the checksum:
 *  Add first, third, fifth, seventh, ninth and eleventh digits.
 *  Add second, fourth, sixth, eigth, tength digits.
 *  Multiply the first sum buy 3 and add it to the second sum.
 *  Subtract 1 from the total.
 *  Compute the remainder when the adjusted total is divided by 10.
 *  subtract the remainder from 9.
 */
int main(void){
  printf("Enter an 11 digit UPC code: ");
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
  int firstSum = num1 + num3 + num5 + num7 + num9 + num11;
  int secondSum = num2 + num4 + num6 + num8 + num10;
  secondSum = secondSum + (firstSum * 3);
  int checksum = 9 - ((secondSum - 1) % 10);
  printf("The checksum is %d\n", checksum);
}
