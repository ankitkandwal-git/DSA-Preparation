package arrays.MaximunConsecutiveOnes;

import java.util.*;

class Main{
    static int MaximunConsecutiveOnes(int[]arr,int n){
        int count  = 0;
        int curr = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
                if(count>curr){
                    curr = count;
                }
            }
            else count = 0;
        }
        return curr;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the size of array: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            System.out.print("Enter the elements in arrays: ");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int result = MaximunConsecutiveOnes(arr, n);
            System.out.print(result);
        }
    }
}