#include<stdio.h>
void show(int x)
{
  if(x<=0)return;
  show(x-1);
  printf("%d\n",x);
  show(x-2);
}
void main()
{
  show(5);
}

