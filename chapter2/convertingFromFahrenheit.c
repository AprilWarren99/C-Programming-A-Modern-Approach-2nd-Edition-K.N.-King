#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
  float fahrenheit, celsius;
  printf("Enter a temperature in fahrenheit to convert to: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

  printf("Celsius: %.1f\n", celsius);

  return 0;
}
