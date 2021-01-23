#include<stdio.h>
void show(int x)
{
  if(x<=0)return;
  printf("%d\n",x);
  show(x-1);
  show(x-3);
}
void main()
{
  show(5);
}

