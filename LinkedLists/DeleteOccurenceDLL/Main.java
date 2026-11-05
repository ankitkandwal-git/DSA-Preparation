package LinkedLists.DeleteOccurenceDLL;
import java.util.*;

class Node{
    int data;
    Node next;
    Node prev;
    Node(int data){
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}
class Main{
    static Node arrayToLL(int arr[], int n){
        Node head = new Node(arr[0]);
        Node temp = head;
        for(int i=1;i<n;i++){
            Node newNode = new Node(arr[i]);
            temp.next = newNode;
            newNode.prev = temp;
            temp = newNode;
        }
        return head;
    }
    static void printLL(Node head){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    static Node deleteOccurence(Node head, int x){
        Node cur = head;
        Node prev = null;
        Node newHead;
        while(cur!=null){
            if(cur.data==x){
                if(cur==head) head = cur.next;
                prev.next = newHead;
                next = cur.next;
                if(prev!=null) prev.next = next;
                if(next!=null) next.prev = prev;
            }
            prev = cur;
            cur = cur.next;
        }
        return head;
    }
}