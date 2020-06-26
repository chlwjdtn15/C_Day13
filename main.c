// 문장을 출력하는 함수(print_str)를 만들어주세요.(%s 사용 금지)
// 조건 : %s를 사용할 수 없다.

#include <stdio.h>


// void print_str(char* str) {
//   int i = 0;

//   // 배열의 크기는 8바이트 이므로 sizeof를 써서 for문을 돌릴수 없음.(8보다 크면 출력 불가)
//   // 배열의 가장 마지막은 항상 null (\0) 이므로 while문을 서서 null이 나올때 까지 돌리면 출력 가능

//   while ( 1 ){ //while문으로 일단 돌리기

//     if (str[i] == '\0') {
//       break; //만약에 출력도중 null이 나오면 while문에서 빠져 나옴.
//     }

//     printf("%c", str[i]); //출력
//     i++; //index 올리기


//   }

  //for 문으로 돌리는 방법.


  // for (int i = 0; str[i] != '\0'; i++) {
  //   printf("%c",str[i]);

      //이 printf 말고도 밑에 printf로도 됨.
      //*(str + 1) == str[i]

    // printf("%c," *(str + i));
  // }



//   printf("\n");
// }

//================================================================================//


int get_str_len(char* str){

  int i = 0;

  //while 문으로 먼저 해보기

  // while ( 1 ){
  //   if (str[i] == '\0') {
  //     break;
  //   }

  //   i++;
  // }



  //for loop으로 해보기 (좀 억지)

  for(int w = 0; str[w] != '\0'; w++) {    
    i = w + 1;
  }
 
  return i;
}



int main(void) {

  // char str1[10];
  // str1[0] = 'a';
  // str1[1] = 'b';
  // str1[2] = 'c';
  // str1[3] = '\0';

  // // print_str 함수를 활용하여 문장 str1 출력 실행
  // print_str(str1);
  // //출력 => abc

  // char c[10] = "abcd";
  // print_str(c);
  // // 출력 => abcd

  // char str2[10];
  // str2[0] = 'h';
  // str2[1] = 'e';
  // str2[2] = 'l';
  // str2[3] = 'l';
  // str2[4] = 'o';
  // str2[5] = ' ';
  // str2[6] = 'c';
  // str2[7] = '\0';

  // // print_str 함수를 활용하여 문장 str2 출력 실행
  // print_str(str2);
  // // 출력 => hello c


//======================================================================//


  char name[100] = "Paul"; // 이렇게 하면 name이 가리키는 배열에 Paul이 저장되면서 시작된다.
  int len = get_str_len(name);

  printf("len : %d\n", len);
  // 출력 => len : 4

  name[0] = 't';
  name[1] = 'o';
  name[2] = 'm';
  name[3] = 'a';
  name[4] = 's';
  name[5] = '\0';

  len = get_str_len(name);

  printf("len : %d\n", len);
  // 출력 => len : 5






  return 0;
}