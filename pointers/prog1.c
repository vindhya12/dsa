//basic program
#include <stdio.h>
void main()
{
  int x=0;
  //int *p=&x;
  int *p;
  p=&x;
  printf("x=%d\n",x);
  printf("&x=%d\n",&x);
  printf("p=%d\n",p);
  printf("*p=%d\n",*p);
  printf("&p=%d\n",&p);
}


//x=10
//&x=6422300
//p=6422300
//*p=10
//&p=6422296
