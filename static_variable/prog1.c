#include<stdio.h>
void main()
{
  static int a;
  int b;
  printf("a=%d\n",a);
  printf("b=%d\n",b);
}

//a=0
//b=garbage value
