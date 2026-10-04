package arrays.ThirdLargestNumber;
import java.util.Scanner;
class Main{
    static int ThirdLargestNumber(int n,int[]arr){
        long first = Long.MIN_VALUE;
        long second = Long.MIN_VALUE;
        long third = Long.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(arr[i]>first){
                third = second;
                second = first;
                first = arr[i];
            }
            else if(second<arr[i] && first!=arr[i]){
                second = arr[i];
            }
            else if(third<arr[i] && first!=arr[i]&&second!=arr[i]){
                third = arr[i];
            }
        }
        if(third==Long.MIN_VALUE) return (int) first;
        return (int) third;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the size of arrays: ");
            int n = sc.nextInt();
            System.out.print("Enter the elements in array: ");
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            
            System.out.println("The third largest number is: " + ThirdLargestNumber(n, arr));
        }
    }
}