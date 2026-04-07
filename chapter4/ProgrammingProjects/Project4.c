#include <complex.h>
#include <stdio.h>
/*
 * Write a program that reads an integer from the user and displays it as octal
 */
int main(){
  int userInput;
  printf("Enter an integer value (any number between 0 and 32767): ");
  scanf("%d", &userInput);
  int digitOne = userInput % 8;
  int carry = userInput / 8;
  // printf("Digit One: %d\tCarry: %d\n", digitOne, carry);
  int digitTwo = carry % 8;
  carry = carry / 8;
  // printf("Digit Two: %d\tCarry: %d\n", digitTwo, carry);
  int digitThree = carry % 8;
  carry = carry / 8;
  // printf("Digit Three: %d\tCarry: %d\n", digitThree, carry);
  int digitFour = carry % 8;
  carry = carry / 8;
  // printf("Digit Four: %d\tCarry: %d\n", digitFour, carry);
  int digitFive = carry % 8;
  // printf("Digit Five: %d\tCarry: %d\n\n", digitFive, carry);

  printf("In octal, that is %d%d%d%d%d\n", digitFive, digitFour, digitThree, digitTwo, digitOne);
  return 0;
}
