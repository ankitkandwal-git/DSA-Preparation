package Strings.MaxNestDepthParentheses;
import java.util.*;

class Main{
    static int maxDepth(String s){
        int count=0;
        int depth=0;
        for(char c:s.toCharArray()){
            if(c=='('){
                count++;
                depth=Math.max(depth,count);
            }else if(c==')'){
                count--;
            }
        }
        return depth;
    }
    public static void main(String[] args){
        try(Scanner sc = new Scanner(System.in)){
            String s = sc.next();
            System.out.println(maxDepth(s));
        }
    }
}