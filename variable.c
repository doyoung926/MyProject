//variable - 변할 수 있는 어떤 것
//constant - 변할 수 없는 어떤 것

/*
홍길동
  - 나이 (변수)
  - 생일 (상수)
*/

#include <stdio.h>
#define pi 3.1415 // constant

int main(void)
{
  // variable
  int age = 14;
  float weight;
  char letter_grade = 'a';

  weight = 38.5;

  // \t tab
  // \n enter
  printf("I'm %d years old \n", age);
  printf("I'm %.2fkg \n", weight);
  printf("I got %c \n", letter_grade);

  return 0;
}
