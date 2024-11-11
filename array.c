#include <stdio.h>

int main(void) {
  int score[5];
  int total = 0;
  int i;
  double avg;
  int count;

  count = sizeof(score) / sizeof(score[0]);

  for (i = 0; i < count; i++) {
    printf("점수를 입력해주세요");
    scanf("%d", &score[i]);
  }

  for (i = 0; i < count; i++) {
    total += score[i];
  }

  avg = total / (double)count;

  for (i = 0; i < count; i++) {
    printf("%5d", score[i]);
  }

  printf("\n");

  printf("평균: %.1lf\n", avg);

  return 0;
}
