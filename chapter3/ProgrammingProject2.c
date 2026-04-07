/* Question2 on page 50 - C Programming - A Modern Approach, 2nd Edition - K. N. King  */

#include <stdio.h>

int main(void){
  int item_number, purchase_day, purchase_month, purchase_year;
  float unit_price;

  printf("Enter the item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter the purchase date (dd/mm/yyyy): ");
  scanf("%d /%d /%d", &purchase_day, &purchase_month, &purchase_year);

  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d\t\t$\t%4.2f\t%d/%d/%d\n", item_number, unit_price, purchase_day, purchase_month, purchase_year);
  return 0;
}
