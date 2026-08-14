package LinkedLists.RemoveDuplicate;
import java.util.*;


class Node{
    int data;
    Node next;
    Node(int val){
        this.data = val;
        this.next = null;
    }
}

public class Main {
    public static Node arrayToLL(int[]arr){
        int n = arr.length;
        Node head = new Node(arr[0]);
        Node temp = head;
        for(int i=1;i<n;i++){
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }


    public static void printLL(Node head){
        Node temp = head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static Node removeDuplicates(Node head){
        if(head==null || head.next==null) return head;
        Node curr = head;
        while(curr != null && curr.next != null){
            if(curr.data == curr.next.data){
                curr.next = curr.next.next;
            }
            else{
                curr = curr.next;
            }
        }
        return head;
    }

    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int[]arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            Node head = arrayToLL(arr);
            head = removeDuplicates(head);
            printLL(head);
        }
    }
}