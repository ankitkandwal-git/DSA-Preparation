package arrays.RearrangeArray;
import java.util.*;

class Main{
    static int rearrange(int[]arr,int n){
        int pos=0;
        int neg=1;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                arr[pos]= arr[i];
                pos+=2;
            }
            else{
                arr[neg] = arr[i];
                neg+=2;
            }
        }
        return ans;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the size of array: ");
            int n = sc.nextInt();
            int[] arr = new int[n];
            System.out.print("Enter the elements of array: ");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            rearrange(arr,n);
        }
    }
}