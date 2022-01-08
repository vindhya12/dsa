import java.util.Arrays;

public class SearchIn2DArray {
    public static void main(String args[]){
        int[][] arr={
            {1,2,3},
            {4,5,6,7},
            {8,9},
            {10,11,12}
        };
        int target=6;
        int ans[]=SearchTarget(arr,target); //returning values in [row,column]
        System.out.println(Arrays.toString(ans));

    }
    static int[] SearchTarget(int arr[][],int target)
    {
        for(int row=0;row<arr.length;row++){
            for(int col=0;col<arr[row].length;col++)
            {
                if(arr[row][col]==target){
                    return new int[]{row,col}; 
                }
                
            }
        }
        return new int[]{-1,-1};
    }
    
}
