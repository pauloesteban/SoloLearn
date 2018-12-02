#include <stdio.h>

void * square (const void *num);

int main() {
  float x, sq_int;
  x = 6;
  sq_int = *(float *)square(&x);
  printf("%f squared is %f\n", x, sq_int);

  return 0;
}

void* square (const void *num) {
  static float result;

  result = (*(float *)num) * (*(float *)num);
  return &result;
}
