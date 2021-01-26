#include<stdio.h>
int i=10;
void show()
{
  if(i<5)return;
  show();
  i--;
  printf("%d\n",i);
}
void main()
{
  show();
}

//show() will be called infinite times
