#include<stdio.h>
void show(int a[])
{
  a[2]=55;
}
void main()
{
  int i;
  int x[]={10,20,30,40,50};
  show(x);
  for(i=0;i<5;i++)
  {
    printf("%d, ",x[i]);
  }
}

//10, 20, 55, 40, 50
