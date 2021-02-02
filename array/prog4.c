#include <iostream>
using namespace std;

int getSum(int a[],int n);

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin >> a[i];
      }
      cout << getSum(a,n) << end1;
  }

return 0;
}

int getSum(int a[], int n) {
    // Your code goes here
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}   

