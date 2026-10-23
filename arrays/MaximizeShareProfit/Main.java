package arrays.MaximizeShareProfit;
import java.util.*;

class Main{
    static int maxShareProfit(int arr[], int n){
        int profit = 0;
        int minimum=arr[0];
        int maxProfit=0;
        for(int i=1;i<n;i++){
            profit=arr[i]-minimum;
            maxProfit=Math.max(maxProfit,arr[i]);
        }
        return maxProfit;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the size of array: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            System.out.println("Enter the elements of array: ");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int maxProfit = maxShareProfit(arr, n);
            System.out.println("Maximum profit is: " + maxProfit);
        }
    }
}