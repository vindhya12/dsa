#include<stdio.h>
#include<stdbool.h>
#define N 8
void display(int x[N][N])
{
	int i,j;
	for(i = 0; i< N; i++)
	{
		for(j = 0; j< N; j++)
		{
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
bool isvalid(int x[N][N], int r, int c)
{
	int i,j;
	
	//row check
	// for(j=c; j>=0; j--)
	// {
		// if(x[r][j])
			// return false;
	// }
	
	//column check
	for(i=r; i>=0; i--)
	{
		if(x[i][c])
			return false;
	}
	// diagonal \ check 
	for(i=r,j=c; j>=0 && i>=0 ;i--,j--)
	{
		if(x[i][j])
			return false;
	}
	//diaginal / check
	for(i=r,j=c; i>=0&&j<4 ;i--, j++)
	{
		if(x[i][j])
			return false; 
	}
	return true;
}

bool show(int x[N][N],int r)
{
	int i,j;
	if(r==N) return true;
	for(j = 0; j< N; j++)
	{
		if(isvalid(x,r,j))
		{
			x[r][j] = 1;
			//display(x);			
			if(show(x,r+1)) return true;
			x[r][j] = 0;
			//display(x);			
		}	
	}
	return false;
}		
void main()
{
	int i,j;
	int x[N][N] = {0};
	show(x,0);	
	display(x);

}


// 1 0 0 0 0 0 0 0
// 0 0 0 0 1 0 0 0
// 0 0 0 0 0 0 0 1
// 0 0 0 0 0 1 0 0
// 0 0 1 0 0 0 0 0
// 0 0 0 0 0 0 1 0
// 0 1 0 0 0 0 0 0
// 0 0 0 1 0 0 0 0
