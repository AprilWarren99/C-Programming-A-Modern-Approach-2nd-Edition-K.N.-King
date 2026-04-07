/* Question 1 on page 50 - C Programming - A Modern Approach, 2nd Edition - K. N. King */

#include <stdio.h>

int main(void){
  int date_day, date_month, date_year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d /%d /%d", &date_month, &date_day, &date_year);
  printf("You the date in (yyyy/mm/dd) format is: %.4d/%.2d/%.2d\n", date_year, date_month, date_day);

  return 0;
}
