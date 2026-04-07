#include <stdio.h>

int main(){
  int userInput;
  printf("Enter a number: ");
  scanf("%d", &userInput);
  if(0 <= userInput && userInput < 10){
    printf("There is 1 digit in this number\n");
  }else if(10 <= userInput && userInput < 100){
    printf("There are 2 digits in this number.\n");
  }else if(100 <= userInput && userInput < 1000){
    printf("There are 3 digits in this number.\n");
  }else if (1000 <= userInput && userInput < 10000){
    printf("There are 4 digits in this number.\n");
  }
  else{
    printf("Case not matched\n");
  }
}
