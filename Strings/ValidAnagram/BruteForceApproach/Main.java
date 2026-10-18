package Strings.ValidAnagram.BruteForceApproach;
import java.util.*;

class Main{
    static boolean validAnagram(String s1,String s2){
        char[] s1Array = s1.toCharArray();
        char[] s2Array = s2.toCharArray();
        Arrays.sort(s1Array);
        Arrays.sort(s2Array);
        if(s1.length() != s2.length()) return false;
        return Arrays.equals(s1Array,s2Array);
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the first string: ");
            String s1 = sc.nextLine();
            System.out.println("Enter the second string: ");
            String s2 = sc.nextLine();
            System.out.println(validAnagram(s1,s2));
        }
    }
}