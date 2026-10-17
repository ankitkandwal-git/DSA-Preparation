package arrays.MajorityElement;
import java.util.*;

class Main{
    static int MajorityElement(int[]arr, int n){
        int leader = arr[0];
        int count = 1;
        for(int i=1;i<n;i++){
            if(arr[i]==leader) count++;
            else if(count==0) leader = arr[i];
            else count--;
        }
        return leader;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the size of array: ");
            int n = sc.nextInt();
            System.out.print("Enter the elements in array: ");
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int result = MajorityElement(arr, n);
            System.out.print(result);
        }
    }
}