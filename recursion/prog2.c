#include<stdio.h>
{
  if(x<=0)return;
  printf("%d\n",x);
  show(x-1);
  show(x-1);
}
void main()
{
  show(5);
}
