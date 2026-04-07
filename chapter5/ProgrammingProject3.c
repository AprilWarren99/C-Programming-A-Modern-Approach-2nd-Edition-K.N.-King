#include <stdio.h>

/*
 * Update broker.c found in section 5.2 by making the following changes.
 *  a) Ask the user to enter the number of shares and the price per share instead of value of the trade.
 *  b) Add statements to comput the commission charged by a rival broker ($33 pluc $0.03 per share for fewer than 2000 shares $33 plus $0.02 per share for 2000 shares or more.)
 *  c) Display the rivals commission as well as the original brokers commission.
 */

int main(){
  int numberOfShares;
  float pricePerShare, transactionValue, originalCommission, rivalCommission;
 
  printf("Please enter the number of shares: ");
  scanf("%d", &numberOfShares);
  printf("Please enter the price per share: ");
  scanf("%f", &pricePerShare);

  transactionValue = numberOfShares * pricePerShare;
  // Computer original brokers commission based on value of transaction
  if(transactionValue < 2500.00f){
    originalCommission = 30.00f + 0.017f * transactionValue;
  } else if(transactionValue < 6250.00f){
    originalCommission = 56.00f + 0.0066f * transactionValue;
  }else if(transactionValue < 20000.00f){
    originalCommission = 76.00f + 0.0034f * transactionValue;
  }else if(transactionValue < 50000.00f){
    originalCommission = 100.00f + 0.0022f * transactionValue;
  }else if(transactionValue < 500000.00f){
    originalCommission = 155.00f + 0.0011f * transactionValue;
  }else{
    originalCommission = 255.00f + 0.0009f * transactionValue;
  }
  if(originalCommission < 39.00f){
    originalCommission = 39.00f;
  }
  // Compute rival brokers commission based on number of shares
  if(numberOfShares < 2000){
    rivalCommission = 33.0f + 0.03f * numberOfShares;
  }else{
    rivalCommission = 33.0f + 0.02f * numberOfShares;
  }
  printf("Original commission: $%.2f\nRival commission: $%.2f\n", originalCommission, rivalCommission);
}
