#include<stdio.h>
void show()
{
  static int x;
  x++;
  printf("%d\n",x);
}
void main()
{
  show();
  show();
  show();
}

//1
//2
//3

