#include <stdio.h>

/*
 * Repeat the question for Project 2 using upc.c (found in section 4.1 of the book)
 */

int main(){
  int firstNumber, secondNumber, thirdNumber;
  printf("Enter a three digit number:");
  scanf("%1d%1d%1d", &firstNumber, &secondNumber, &thirdNumber);
  printf("That number reversed is: %d%d%d\n", thirdNumber, secondNumber, firstNumber);
  return 0;
}
