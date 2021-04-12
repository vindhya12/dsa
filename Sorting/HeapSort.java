import java.util.Scanner;
class HeapSort
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int x[] = new int[n];
		//int n = x.length;
		showloop(x, n);
		deleteDemo(x, n);
	}
	


	static void printArray(int x[], int n)
	{
		int i;
		for(i = 0; i < n; i++)
		{
			System.out.print(x[i]+" ");
		}
		System.out.print("\n");
	}
	static void show(int x[], int i, int n) // 0    1 2
	{
		int l = i*2 + 1;
		int r = i*2 + 2;
		int max = i;
		if (l < n && x[l] > x[max])
		{
			max = l;
		}
		if (r < n && x[r] > x[max])
		{
			max = r;
		}
		if(x[i] < x[max])
		{
			int t = x[i];
			x[i] = x[max];
			x[max] = t;
			show(x, max, n);
		}
	}
	static void showloop(int x[], int n)
	{
		for(int i = (n/2)-1; i >= 0; i--) 
		{
			show(x, i, n);
		}
	}
	static void deleteDemo(int x[], int n)
	{
		int i;
		for(i = n-1; i>0; i--)
		{
			int t = x[0];
			x[0] = x[i];
			x[i] = t;
			show(x, 0, i);
			printArray(x, n);
		}
	}
}

