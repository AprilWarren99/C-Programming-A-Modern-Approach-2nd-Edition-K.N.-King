#include <stdio.h>

int main(){
  float taxableIncome, tax, remainingIncomeToTax;
  printf("Please enter your taxable income: ");
  scanf("%f", &taxableIncome);
  if(taxableIncome <= 750.00f){
    tax = taxableIncome * 0.01f;
  } else if(taxableIncome <= 2250.00f){
    tax = 7.50f + taxableIncome * 0.02f;
  } else if(taxableIncome <= 3750.00f){
    tax = 37.50f + taxableIncome * 0.03f;
  } else if(taxableIncome <= 5250.00f){
    tax = 82.50f + taxableIncome * 0.04f;
  } else if(taxableIncome <= 7000.00f){
    tax = 142.50f + taxableIncome * 0.05f;
  } else {
    tax = 230.00f + taxableIncome * 0.06f;
  }
  printf("Tax due: %.2f\n", tax);
}
