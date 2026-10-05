package Strings.Palindrome;

import java.util.*;

class Main{
    static boolean isPalindrome(String s){
        int n = s.length();
        int left = 0;
        int right = n-1;
        while(left<right){
            if(s.charAt(left) != s.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter the string: ");
            String s = sc.nextLine();
            if(isPalindrome(s)) System.out.println("This string is Palindrome");
            else System.out.println("This is not Palindrome");
        }
    }
}