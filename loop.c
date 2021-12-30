#include <stdio.h>

int main(void)
{
  /*for (int i=1; i<=10; i++)
  {
    printf("Hello World %d\n", i);
  }*/

  /*int i = 1;
  while (i<=10)
  {
    printf("Hello World %d\n", i++);
  }*/

  /*int i = 1;
  do
  {
    printf("Hello World %d\n", i++);
  } while (i<=10);*/

  /*for (int i=1; i<=3; i++)
  {
    printf("첫 번째 반복문 : %d\n", i);

    for (int j=1; j<=5; j++)
    {
      printf("두 번째 반복문 : %d\n", j);
    }
  }*/

  for (int i=2; i<=9; i++)
  {
    printf("%d단 계산\n", i);
    for (int j=1; j<=9; j++)
    {
      printf("%d x %d = %d\n", i, j, i*j);
    }
  }

  return 0;
}
