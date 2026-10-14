package arrays.MissingElement;
import java.util.*;

class Main{
    static int findMissingElement(int[]arr,int n){
        int xor1 = 0;
        int xor2 = 0;
        for(int i=0;i<=n-2;i++){
            xor1 ^=arr[i];
        }
        for(int i=0;i<n;i++){
            xor2 ^= (i+1);
        }
        return xor1 ^ xor2;
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n-1];
        System.out.print("Enter the elements: ");
        for(int i=0;i<n-1;i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("The missing element is: " + findMissingElement(arr,n));
    }
}