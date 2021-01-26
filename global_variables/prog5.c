#include<stdio.h>
int i=10;
void show()
{
  if(i==5)return;
  i++;
  show();
  printf("%d\n",i);
}
void main()
{
  show();
}

//5
//5
//5
//5
//5
