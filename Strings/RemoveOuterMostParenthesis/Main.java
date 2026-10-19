package Strings.RemoveOuterMostParenthesis;
import java.util.*;

class Main{
    static String removeOuterParentheses(String s){
        int count =0;
        String ans="";
        for(char c:s.toCharArray()){
            if(c=='('){
                if(count>0) ans+=c;
                count++;
            }else{
                count--;
                if(count>0) ans+=c;
            }
        }
        return ans;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(removeOuterParentheses(s));
    }
}