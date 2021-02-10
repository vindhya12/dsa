// Showing the sizeof the given data types

#include <stdio.h>
void main()
{
  int x=10;
  float y=10.0;
  long x1=10;
  double y1=10.0;
  char z=77;
  
  printf("int=%d\n",sizeof(x));
  printf("long=%d\n",sizeof(x1));
  printf("float=%d\n",sizeof(y));
  printf("double=%d\n",sizeof(y1));
  printf("char=%d\n",sizeof(z));
}

//int =4
//long=4
//float=4
//double=8
//char=1
