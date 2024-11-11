#include <stdio.h>

int main(void) {
  char str[90];
  int ctn = 0;
  int i;
  printf("문자를 입력해주세요:");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += ('a' - 'A');
      ctn++;
    }
  }
  printf("바뀐 문장:");
  puts(str);
  printf("바뀐 문자 수: %d\n", ctn);

  return 0;
}
