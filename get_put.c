#include <stdio.h>

int main(void) {
  char str[6];
  printf("문자열 입력 : ");
  fgets(str, sizeof(str), stdin);
  puts("입력된 문자열 : ");
  puts(str);

  return 0;
}
