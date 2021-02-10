// Program to change values using pointer

#include <stdio.h>
void main()
{
  int x=10;
  int *p=&x;
  printf("x=%d\n",x);
  printf("*p=%d\n\n",*p);
  
  *p=20;
  printf("x=%d\n",x);
  printf("*p=%d\n",*p);
}

// x=10
//*p=10

//x=20
//*p=20
  
