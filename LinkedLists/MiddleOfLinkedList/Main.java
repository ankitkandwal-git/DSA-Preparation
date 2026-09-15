package LinkedLists.MiddleOfLinkedList;
import java.util.*;

class Node{
    int data;
    Node next;
    Node(int val){
        this.data = val;
        this.next = null;
    }
};

class Main{
    public static Node arrayToLL(int[]arr,int n){
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
    public static Node findMiddle(Node head){
        if(head==null || head.next==null) return null;
        Node slow = head;
        Node fast = head;
        while(fast!=null && fast.next !=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            Node head = arrayToLL(arr,n);
            printLL(head);
            Node middle = findMiddle(head);
            if(middle != null){
                System.out.println("Middle element: " + middle.data);
            }else{
                System.out.println("No middle element found.");
            }
        }
    }
}