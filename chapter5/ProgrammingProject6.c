#include <stdio.h>
/*
 * Rewrite upc.c in Section 4.1 so that the user enters 11 digits at one time.
 * Then verify the checksum
 */
int main(void){
  printf("Enter an 12 digit UPC code: ");
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, checksum;
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &checksum);
  int firstSum = num1 + num3 + num5 + num7 + num9 + num11;
  int secondSum = num2 + num4 + num6 + num8 + num10;
  secondSum = secondSum + (firstSum * 3);
  int calculatedChecksum = 9 - ((secondSum - 1) % 10);

  if(calculatedChecksum == checksum){
    printf("Checksum is valid.\n");
  }else{
    printf("Checksum is invalid.\n\tExpected: %d\n\tReceived: %d\n", calculatedChecksum, checksum);
  }
}
