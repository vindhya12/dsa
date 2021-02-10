// to show that data stored in array has continuous memory location

#include <stdio.h>
void main()
{
  int x[]={1,2,3};
  for(i=0;i<3;i++)
  {
    printf("%d",&x[i]);
  }
}

//6422288  6422292  6422296
