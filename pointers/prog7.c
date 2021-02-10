//Print a list using pointer

#include <stdio.h>
void main()
{
  int i;
  int x[]={1,2,3,4,5};
  int *p=&x[0];
  for(i=0;i<5;i++)
  {
    printf("%d ",*p);
  }
}

//1 2 3 4 5
  
