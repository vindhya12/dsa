class BubbleSort
{
	public static void main(String args[])
	{
		int arr[]={38,12,-10,78,-12,3,9,82,10};
		
		//calling bubbleSort method;
		bubbleSort(arr,arr.length);
		
		for(int i:arr)
		{
			System.out.print(i+" ");
		}
	}
	
	static void bubbleSort(int arr[],int n)
	{
		for(int i=n;i>0;i--)
		{
			for(int j=0;j<i-1;j++)
			{
				if(arr[j+1]<arr[j])
				{
					//swap(arr[j+1],arr[j]);
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
}
