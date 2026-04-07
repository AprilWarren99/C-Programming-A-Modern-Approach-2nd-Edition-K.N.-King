#include <stdio.h>

/*
 * Find the largest and smallest of four integers entered by a user.
 */

int main(){
  int inputOne, inputTwo, inputThree, inputFour, smallest, largest;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &inputOne, &inputTwo, &inputThree, &inputFour);
  // I believe there is a better way to do this. This has 6 comparisons, my original had 24 I believe.
  if(inputOne >= inputTwo){
    largest = inputOne;
    smallest = inputTwo;
  }else{
    largest = inputTwo;
    smallest = inputOne;
  }

  if(inputThree >= inputFour){
    if(inputThree >= largest){
      largest = inputThree;
    }
    if(inputFour <= smallest){
      smallest = inputFour;
    }
  }else{
    if(inputFour >= largest){
      largest = inputFour;
    }
    if(inputThree <= smallest){
      smallest = inputThree;
    }
  }
  

  /*
  if(inputOne >= inputTwo && inputOne >= inputThree && inputOne >= inputFour){
    largest = inputOne;
  }else if(inputTwo >= inputOne && inputTwo >= inputThree && inputTwo >= inputFour){
    largest = inputTwo;
  }else if(inputThree >= inputOne && inputThree >= inputTwo && inputThree >= inputFour){
    largest = inputThree;
  }else{
    largest = inputFour;
  }
  if(inputOne <= inputTwo && inputOne <= inputThree && inputOne <= inputFour){
    smallest = inputOne;
  }else if(inputTwo <= inputOne && inputTwo <= inputThree && inputTwo <= inputFour){
    smallest = inputTwo;
  }else if(inputThree <= inputOne && inputThree <= inputTwo && inputThree <= inputFour){
    smallest = inputThree;
  }else{
    smallest = inputFour;
  }
  */

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);
}
