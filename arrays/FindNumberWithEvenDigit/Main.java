package arrays.FindNumberWithEvenDigit;
import java.util.Scanner;
public class Main {
    static int countEvenDigitNumbers(int arr[],int n){
        int count = 0;
        for(int i=0;i<n;i++){
            String s = Integer.toString(arr[i]);
            if(s.length()%2==0) count++;
        }
        return count;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the size of the array: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            System.out.print("Enter the elements of the array: ");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int evenDigitCount = countEvenDigitNumbers(arr,n);
            System.out.println("Number of elements with even digits: " + evenDigitCount);
        }
    }
}
