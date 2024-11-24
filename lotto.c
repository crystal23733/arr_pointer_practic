#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void) {
  int lotto_nums[6];

  input_nums(lotto_nums);
  print_nums(lotto_nums);
  return 0;
}

void input_nums(int *lotto_nums) {
  int num, duplicate;
  for (int i = 0; i < 6; i++) {
    while (1) {
      printf("1~45 사이의 숫자를 입력해주세요.");
      scanf("%d", &num);

      // 입력 범위 확인
      if (num < 1 || num > 45) {
        printf("1부터 45까지의 숫자 중 입력해주세요!\n");
        continue;
      }

      // 중복 여부 확인
      duplicate = 0;
      for (int j = 0; j < i; j++) {
        if (lotto_nums[j] == num) {
          duplicate = 1;
          printf("이미 입력된 숫자입니다. 다시 입력해주세요.\n");
          break;
        }
      }

      // 중복이 없을 경우 배열에 저장
      if (!duplicate) {
        lotto_nums[i] = num;
        break;
      }
    }
  }
}

void print_nums(int *lotto_nums) {
  printf("입력한 숫자: ");
  for (int i = 0; i < 6; i++) {
    printf("%d ", lotto_nums[i]);
  }
  printf("\n");
}
