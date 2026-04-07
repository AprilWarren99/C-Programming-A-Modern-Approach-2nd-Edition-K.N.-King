#include <stdio.h>

int main(){
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume: %d\n", volume);
  return 0;
}
