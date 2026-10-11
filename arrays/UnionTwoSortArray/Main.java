package arrays.UnionTwoSortArray;
import java.util.*;

class Main{
    static ArrayList<Integer>UnionTwoSortArray(ArrayList<Integer>arr1,ArrayList<Integer>arr2){
        int i=0,j=0;
        ArrayList<Integer>ans = new ArrayList<>();
        while(i<arr1.size() && j<arr2.size()){
            if(arr1.get(i)<arr2.get(j)){
                if(ans.isEmpty() || ans.get(ans.size()-1)!=arr1.get(i)){
                    ans.add(arr1.get(i));
                }
                i++;
            }
            else{
                if(ans.isEmpty() || ans.get(ans.size()-1)!=arr2.get(j)){
                    ans.add(arr2.get(j));
                }
                j++;
            }
            
        }
        while(i<arr1.size()){
            if(ans.isEmpty() || ans.get(ans.size()-1)!=arr1.get(i)){
                ans.add(arr1.get(i));
            }
            i++;
        }
         while(j<arr2.size()){
            if(ans.isEmpty() || ans.get(ans.size()-1)!=arr2.get(j)){
                ans.add(arr2.get(j));
            }
            j++;
        }
        return ans;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.print("Enter size of a1");
            int m = sc.nextInt();
            System.out.print("Enter size of a2");
            int n = sc.nextInt();
            ArrayList<Integer> arr1 = new ArrayList<>();
            ArrayList<Integer> arr2 = new ArrayList<>();
            System.out.println("Enter elements of a1: ");
            for(int i=0;i<m;i++){
                arr1.add(sc.nextInt());
            }
            System.out.println("Enter elements of a2: ");
            for(int i=0;i<n;i++){
                arr2.add(sc.nextInt());
            }
            ArrayList<Integer> result = UnionTwoSortArray(arr1, arr2);
            System.out.println("Union of two sorted arrays: " + result);
        }
    }
}

