#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
  printf("Hello world\n");

  printf("%d\n", getpid());

  int num = 0;
  scanf("%d", &num);
  printf("%d\n", num);

  return 0;
}
