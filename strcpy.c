#include <stdio.h>
#include <string.h>

int main(void) {
  /*
   *	예제 1
   * char str1[80] = "cat";
  char str2[80];
  char str3[3];
  printf("변경 전:%s", str1);
  strcpy(str1, "tiger");
  strcpy(str2, str1);
  printf("변경 후:%s, %s\n", str1, str2);
  strcpy(str3, str1);
  printf("배열이 짧은 str3:%s", str3);

  return 0;*/
  /*
   *	예제 2
   * char str1[] = "tiger";
  char str2[3];

  strncpy(str2, str1, sizeof(str2));
  printf("%s", str2);
  return 0;
  */

  char str1[10];
  printf("문자열을 입력해주세요:");
  fgets(str1, sizeof(str1), stdin);
  char str2[3];
  strncpy(str2, str1, sizeof(str2) - 1);
  str2[sizeof(str2) - 1] = '\0';
  printf("%s", str2);
  return 0;
}
