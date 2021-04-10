class RadixSort
{
	public static void main(String args[])
	{
		int arr[]={432,8,530,-90,88,231,11,45,677,199};
		
		//finding min in the original arr[]
		int min=arr[0];
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
		
		//subtract min fromall the elements in the original arr[]
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=arr[i]-min;
		}
		
		//calling radix sort method
		radixSort(arr,arr.length);
		
		//again adding the  min to the sorted arr[]
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=arr[i]+min;
		}
		
		for(int i:arr)
		{
			System.out.print(i+" ");
		}
	}
	
	static void radixSort(int arr[],int n)
	{
		
		int max=getMax(arr,n);
		int pass;
		
		for(pass=1;(max/pass)>0;pass=pass*10)
		{
			countSort(arr,n,pass);
		}
	}
	
	static int getMax(int arr[],int n)
	{
		int max=arr[0];
		for(int i=0;i<n;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		return max;
	}
	
	static void countSort(int arr[],int n,int pass)
	{
		int count[]=new int[10];
		int output[]=new int[n];
		for(int i=0;i<n;i++)
		{
			++count[(arr[i]/pass)%10];
		}
		for(int i=1;i<10;i++)
		{
			count[i]=count[i]+count[i-1];
		}
		for(int i=n-1;i>=0;i--)
		{
			output[--count[(arr[i]/pass)%10]]=arr[i];
		}
		
		for(int i=0;i<n;i++)
		{
			arr[i]=output[i];
		}
		
	}
}
