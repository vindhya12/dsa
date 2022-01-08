import java.util.Arrays;

public class SearchInString {
    public static void main(String args[]){
        String str="target";
        char target='k';
        System.out.println(searchTarget(str,target));

        System.out.println(Arrays.toString(str.toCharArray()));

    }
   static boolean searchTarget(String str,char target){
       if(str.length()==0){
           return false;
       }
       /*
       for(int i=0;i<str.length();i++){
           if(target==str.charAt(i)){
               return true;
           }
       }
       */
       //using foreach loop
       for(char ch:str.toCharArray()){
           if(ch==target){
               return true;
           }
       }
       return false;

   }
}
