#include<stdio.h>
#include<stdlib.h>
void show()
{
  printf("show 1\n");
  exit(0);
  printf("show 2\n");
}
void main()
{
  printf("main 1\n");
  show();
  printf("main 2\n");
}

//main 1
//show 1
