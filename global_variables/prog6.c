#include<stdio.h>
int i=0;
void show()
{
  if(i==5)return;
  i++;
  int j=i;
  show();
  printf("%d\n",j);
}
void main()
{
  show();
}

//5
//4
//3
//2
//1
