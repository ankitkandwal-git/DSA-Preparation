package arrays.TwoSum2;
import java.util.*;

class Main{
    static int[] twoSum(int[] arr,int target){
        int n=arr.length;
        int i=0,j=n-1;
        while(i<j){
            int sum = arr[i]+arr[j];
            if(sum==target) return new int[]{i+1,j+1};
            else if(sum<target) i++;
            else j--;
        }
        return new int[]{-1,-1};
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the size of the array:");
            int n = sc.nextInt();
            int[] arr = new int[n];
            System.out.println("Enter the elements of the array:");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            System.out.println("Enter the target sum:");
            int target = sc.nextInt();
            int[] result = twoSum(arr,target);
            if(result[0]==-1){
                System.out.println("No two numbers found that add up to the target.");
            }else{
                System.out.println("Indices of the two numbers that add up to the target are: " + result[0] + " and " + result[1]);
            }
        }
    }
}