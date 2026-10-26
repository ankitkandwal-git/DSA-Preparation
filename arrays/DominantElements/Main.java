package arrays.DominantElements;
import java.util.*;

class Main{
    static List<Integer> dominant(int arr[], int n){
        int maxi = Integer.MIN_VALUE;
        List<Integer>ans= new ArrayList<>();
        for(int i=0;i<n;i++){
            if(arr[i]>=maxi){
                ans.add(arr[i]);
                maxi = arr[i];
            }
        }
        Collections.reverse(ans);
        return ans;
    }
    public static void main(String args[]){
        int arr[] = {16, 17, 4, 3, 5, 2};
        int n = arr.length;
        List<Integer> ans = dominant(arr,n);
        for(int i=0;i<ans.size();i++){
            System.out.print(ans.get(i)+" ");
        }
    }
}