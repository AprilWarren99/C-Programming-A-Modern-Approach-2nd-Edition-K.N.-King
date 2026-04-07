#include <stdio.h>

int main(){
  int userInput;
  printf("Enter a two digit number: ");
  scanf("%d", &userInput);
  int firstNumber = userInput / 10, secondNumber = userInput % 10;
  printf("The reversal is: %d%d\n", secondNumber, firstNumber);
  
  return 0;
}
