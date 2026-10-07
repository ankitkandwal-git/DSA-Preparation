package LinkedLists.SortLinkedListByRemoveDuplicates;
import java.util.*;

class Node{
    int data;
    Node next;
    Node(int x){
        data = x;
        next = null;
    }
}
class Main{
    static Node arrayToLL(int[]arr,int n){
        if(n == 0) return null;
        Node head = new Node(arr[0]);
        Node current = head;
        for(int i = 1; i < n; i++){
            current.next = new Node(arr[i]);
            current = current.next;
        }
        return head;
    }
    static void printLL(Node head){
        Node current = head;
        while(current != null){
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    Node removeDuplicates(Node head){
        if(head==null || head.next==null) return head;
        Node temp = head;
        while(temp!=null && temp.next!=null){
            if(temp.data==temp.next.data){
                Node duplicate = temp.next;
                temp.next = temp.next.next;
                duplicate.next = null;
            } else {
                temp = temp.next;
            }
        }
        return head;
    }
    public static void main(String[] args){
    try(Scanner sc = new Scanner(System.in)){
        System.out.print("Enter the number of elements in the linked list: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the linked list: ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        Node head = arrayToLL(arr, n);
        Main obj = new Main();
        head = obj.removeDuplicates(head);
        printLL(head);
    }  
 }
}