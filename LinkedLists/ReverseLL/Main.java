package LinkedLists.ReverseLL;
import java.util.Scanner;

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
        if(arr.length == 0) return null;
        Node head = new Node(arr[0]);
        Node cur = head;
        for(int i = 1; i < arr.length; i++){
            cur.next = new Node(arr[i]);
            cur = cur.next;
        }
        return head;
    }
    public static void printLL(Node head){
        Node cur = head;
        while(cur != null){
            System.out.print(cur.data + " ");
            cur = cur.next;
        }
        System.out.println();
    }

    Node reverseLL(Node head){
        if(head==null || head.next==null) return head;
        Node prev = null;
        Node cur = head;
        while(cur!=null){
            Node next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter the number of elements in the linked list:");
            int n = sc.nextInt();
            int[] arr = new int[n];
            System.out.println("Enter the elements of the linked list:");
            for(int i = 0; i < n; i++){
                arr[i] = sc.nextInt();
            }
            Node head = arrayToLL(arr);
            System.out.println("Original linked list:");
            printLL(head);
            Main main = new Main();
            head = main.reverseLL(head);
            System.out.println("Reversed linked list:");
            printLL(head);
        }
    }
}
