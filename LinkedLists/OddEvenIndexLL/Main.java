package LinkedLists.OddEvenIndexLL;
import java.util.*;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }
};

public class Main {
    public static Node arrayToLL(int[]arr,int n){
        if(n==0) return null;
        Node head = new Node(arr[0]);
        Node curr = head;
        for(int i=1;i<n;i++){
            curr.next = new Node(arr[i]);
            curr = curr.next;
        }
        return head;
    }
    
    public static void printLL(Node head){
        Node curr = head;
        while(curr != null){
            System.out.print(curr.data + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    Node oddEvenIndexLL(Node head){
        if(head==null && head.next==null) return head;
        Node odd = head;
        Node even = head.next;
        Node evenHead = even;
        while(even != null && even.next!=null){
            odd.next = even.next;
            odd = odd.next;
            even.next = odd.next;
            even = even.next;
        }
        odd.next = evenHead;
        return head;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the number of elements:");
            int n = sc.nextInt();
            int[] arr = new int[n];
            System.out.println("Enter the elements:");
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            Node head = arrayToLL(arr,n);
            Main obj = new Main();
            head = obj.oddEvenIndexLL(head);
            printLL(head);
        }
    }
}
