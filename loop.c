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

  int i = 1;
  do
  {
    printf("Hello World %d\n", i++);
  } while (i<=10);

  return 0;
}
