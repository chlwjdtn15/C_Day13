// 문장을 출력하는 함수(print_str)를 만들어주세요.(%s 사용 금지)
// 조건 : %s를 사용할 수 없다.

#include <stdio.h>



int main(void) {

  char str1[10];
  str1[0] = 'a';
  str1[1] = 'b';
  str1[2] = 'c';
  str1[3] = '\0';

  // print_str 함수를 활용하여 문장 str1 출력 실행
  print_str(str1);
  //출력 => abc

  char c[10] = "abcd";
  print_str(c);
  // 출력 => abcd

  char str2[10];
  str2[0] = 'h';
  str2[1] = 'e';
  str2[2] = 'l';
  str2[3] = 'l';
  str2[4] = 'o';
  str2[5] = ' ';
  str2[6] = 'c';
  str2[7] = '\0';

  // print_str 함수를 활용하여 문장 str2 출력 실행
  print_str(str2);
  // 출력 => hello c

  return 0;
}