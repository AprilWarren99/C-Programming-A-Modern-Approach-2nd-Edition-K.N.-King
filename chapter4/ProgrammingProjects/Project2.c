#include <stdio.h>

int main(){
  int userInput;
  printf("Enter a three digit number: ");
  scanf("%d", &userInput);
  // int firstNumber = userInput / 10, secondNumber = userInput % 10;
  int firstNumber = userInput / 100;
  int secondNumber = (userInput % 100) / 10;
  int thirdNumber = (userInput % 100 ) % 10;

  printf("The reversal is: %d%d%d\n", thirdNumber, secondNumber, firstNumber);
  
  return 0;
}
