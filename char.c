#include <stdio.h>
#include <string.h>

int main(void)
{
  char input[10] = "안녕";
  char result[10] = "ㅎ";
  strcpy(result, input);
  printf("문자열 복사 : %s", result);
  return 0;
}
