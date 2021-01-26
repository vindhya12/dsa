#include<stdio.h>
int i=10;
void show()
{
  if(i<5)return;
  i--;
  printf("%d\n",i);
  show();
}
void main()
{
  show();
}

//9
//8
//7
//6
//5
//4
