public class Demo
{
  public static void main(String args[])
  {
    int arr[]={9,3,1,4,2,7,5};
    int min,temp;
    for(int i;i<arr.length;i++)
    {
      min=i;
      for(int j=i+1;j<arr.length;j++)
      {
        if(arr[j]<arr[min];
           {
             min=j;
           }
      }
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
  }
           for(int i:arr)
           {
             System.out.print(i+" ");
           }
           }
           }
           
 // 1 2 3 4 5 7 9 
           
           
  
