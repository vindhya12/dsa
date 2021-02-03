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
    
    // diagonal / check
    {
      for(i=r,j=c;i>=0 && j<4;i--;j++)
      {
        if(x[i][j])
        {
          return false;
        }
      }
      
  return true;
}
    
bool show(int x[4][4],int r)
{
  int i,j;
  if(r==4) return true;
  for(j=0;j<4;j++)
  {
    if(isvalid(x,r,j))
    {
      x[r][j]=1;
      if(show(x,r+1)) return true;
      x[r][j]=0;
    }
  }
  return false;
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
  
  show(x,0); 
  
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d",x[i][j]);
    }
    printf("\n");
  }
}




// 0 1 0 0
// 0 0 0 1
// 1 0 0 0
// 0 0 1 0

