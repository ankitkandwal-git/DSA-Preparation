package LinkedLists.SwapNodesInPairs;
import java.util.*;

class Node{
    public
    int data;
    Node next;
    Node(int x){
        data = x;
        next = null;
    }
}

class Main {
public static Node arrayToLL(int[]arr,int n){
    Node head = new Node(arr[0]);
    Node temp = head;
    for(int i=1;i<n;i++){
        temp.next = new Node(arr[i]);
        temp = temp.next;
    }
    return head;
}

public void printLL(Node head){
    while(head!=null){
        System.out.print(head.data+" ");
        head = head.next;
    }
}
public static Node swapPair(Node head){
    if (head == null || head.next == null) return head;
    Node dummy = new Node(-1);
    dummy.next = head;
    Node prev = dummy;
    while(prev.next != null && prev.next.next != null){
        Node first = prev.next;
        Node second = first.next;
        first.next = second.next;
        second.next = first;
        prev.next = second;
        prev = first;
    }
    return dummy.next;
}
public static void main(String[]args){
    try(Scanner sc = new Scanner(System.in)){
        System.out.println("Enter the size of the linked list");
        int n = sc.nextInt();
        int[]arr = new int[n];
        System.out.println("Enter the elements of the linked list");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        Node head = arrayToLL(arr,n);
        System.out.println("The linked list is");
        Main m = new Main();
        m.printLL(head);
        head = swapPair(head);
        System.out.println("\nThe linked list after swapping is");
        m.printLL(head);
     }
   }
}