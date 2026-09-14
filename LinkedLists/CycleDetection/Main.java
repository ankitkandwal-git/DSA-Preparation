package LinkedLists.CycleDetection;
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
    public static Node arrayToLL(int[]arr){
        Node head = new Node(arr[0]);
        Node cur = head;
        for(int i=1;i<arr.length;i++){
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

    Node detectCycle(Node head){
        if(head==null || head.next==null) return null;
        Node slow = head;
        Node fast = head;
        while(fast != null && fast.next!=null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow==fast) return slow;
        }
        return null;
    }
    public static void main(String[]args){
        try(Scanner sc = new Scanner(System.in)){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            Node head = arrayToLL(arr);
            printLL(head);
            if(new Main().detectCycle(head) != null){
                System.out.println("Cycle detected");
            } else {
                System.out.println("No cycle detected");
            }
        }
    }
}