public class OrderAgnosticBinarySearch {
    public static void main(String args[]){
        //int[] arr={-2,4,6,9,11,12,14,20,36,48};
        int[] arr={99,40,39,5,2,-1,-10};
        int target=40;

        int ans=OrderAgnosticSearch(arr,target);
        System.out.println(ans);

    }
    static int OrderAgnosticSearch(int[] arr,int target){
        int start=0;
        int end=arr.length-1;

        boolean ascending=arr[start] < arr[end];

        while(start<=end){
            int mid=start+(end-start)/2;

            if(target==arr[mid]){
                return mid;
            }
            if(ascending){
                if(target<arr[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(target<arr[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        
        return -1;

    }
    
}
