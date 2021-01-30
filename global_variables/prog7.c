#include<stdio.h>
void show(int n)
{
  i++;
  if(n<=0)return;
  show(n-1);
  show(n-2);
}
void main()
{
  show(5);
  printf("%d\n",i);
}

//25
