#include <stdio.h>
#include <stdlib.h>

bool isvalid(int x[4][4],int r,int c)
{
  int i,j;
  //row check
  for(j=c;j>=0;j--)
  {
    if(x[r][j])
    {
      return false;
    }
  }
  
  //column check
  for(i=r;i>=0;i--)
  {
    if(x[i][c])
    {
      return false;
    }
  }
  
  //diagonal \ check
  {
    for(i=r,j=c;i>=0 && j>=0;i--,j--)
    {
      if(x[i][j])
      {
        retrun false;
      }
    }
  return true;
}

void main()
{
  int i;
  int x[4][4]={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
  };
  if(isvalid(x,3,3))
  {
    x[0][3]=1;
  }
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d",x[i][j]);
    }
    printf("\n");
  }
}




// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 1
