#include <stdio.h>

int main(){
  float windSpeed;
  printf("Enter the current wind speed (knots): ");
  scanf("%f", &windSpeed);
  if(windSpeed < 1){
    printf("Description: Calm\n");
  }else if(1 <= windSpeed && windSpeed <= 3){
    printf("Description: Light air\n");
  }else if(4 <= windSpeed && windSpeed <= 27){
    printf("Description: Breeze\n");
  }else if (28 <= windSpeed && windSpeed <= 47){
    printf("Description: Gale\n");
  }else if (48 <= windSpeed && windSpeed <= 63){
    printf("Description: Storm\n");
  }else{
    printf("Description: Hurricane\n");
  }
}
