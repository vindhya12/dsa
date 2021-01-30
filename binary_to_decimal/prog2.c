#include<stdio.h>
void main()
{
  int n=32,s=1,s1=0;
  int r,n1;
  while(n!=0)
  {
    r=n%2;
    s=s*10+r;
    n=n/2;
  }
  while(s!=1)
  {
    n1=s%10;
    s1=s1*10+n1;
    s=s/2;
  }
  printf("%d",s1);
}

// 000001
    
