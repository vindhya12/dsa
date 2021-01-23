#include<stdio.h>
void show(int x)
{
  if(x==0)return;
  show(x-1);
  printf("Hello World/n");
}
void main()
{
  show(5);
}
