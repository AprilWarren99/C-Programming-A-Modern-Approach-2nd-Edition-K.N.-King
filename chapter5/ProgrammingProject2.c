#include <stdio.h>

int main(){
  int hours, minutes;
  printf("Enter a 24-hour time: ");
  scanf("%2d :%2d", &hours, &minutes);
  //printf("Hours: %d\nMinutes: %d\n", hours, minutes);
  if(hours > 12){
    hours -= 12;
    printf("%.2d:%.2dpm\n", hours, minutes);
  }else if(hours == 12){
    printf("%.2d:%.2dpm\n", hours, minutes);
  }else{
    printf("%.2d:%.2dam\n", hours, minutes);
  }
}
