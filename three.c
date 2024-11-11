#include <stdio.h>

int main(void)

{
  int A[3] = {1, 2, 3}; // 초기화된 A배열
  int B[10];            // 초기화되지 않은 B배열
  int i;

  for (i = 0; i < 10; i++) {
    B[i] = A[i % 3];
  }

  for (i = 0; i < 10; i++) {
    printf("%5d", B[i]);
  }

  return 0;
}
