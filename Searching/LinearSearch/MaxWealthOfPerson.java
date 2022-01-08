public class MaxWealthOfPerson {
    public static void main(String args[]){
        int[][] accounts={
            {1,2,3},
            {0,5,6},
            {0,1,2}
        };
        System.out.println(MaxWealth(accounts));

    }

    public static int MaxWealth(int[][] accounts){
        //acc=rows, persons=columns
        int maxsum=0;
        for(int acc=0;acc<accounts.length;acc++){
            int sum=0;
            for(int person=0;person<accounts[acc].length;person++){
                sum=sum+accounts[acc][person];                
            }
            if(sum>maxsum)
                {
                    maxsum=sum;
                }
        }
        return maxsum;
    }
}
