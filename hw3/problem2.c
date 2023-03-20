#include <stdio.h>

int main() {
  int height = 5;
  int width = 3;
  int perimeter = 2 * (height + width);
  int area = height * width;

  printf("Perimeter of the rectangle = %d inches\n", perimeter);
  printf("Area of the rectangle = %d square inches\n", area);
  return 0;
}
