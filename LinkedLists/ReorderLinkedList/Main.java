package LinkedLists.ReorderLinkedList;
import java.util.*;

class Node{
    public 
    int data;
    Node next;
    Node(int x){
        data = x;
        next = null;
    }
};

class Main{
    public static Node arrayToLL(int[]arr,int n){
        Node head = new Node(-1);
        Node temp = head;
        for(int i=1;i<n;i++){
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }
    public static void printLL(Node head){
        while(head!=NULL){
            System.out.print(head.data);
            head = head.next;
        }
    }
}
