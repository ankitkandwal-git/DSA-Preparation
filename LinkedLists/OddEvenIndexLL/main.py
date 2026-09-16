class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 

def array_to_LL(arr):
    if not arr:
        return None
    head = Node(arr[0])
    curr = head
    for i in range(1,len(arr)):
        curr.next = Node(arr[i])
        curr = curr.next
    return head

def print_LL(head):
    curr = head
    while curr:
        print(curr.data, end=" ")
        curr = curr.next
    print()

def odd_even_index_LL(head):
    if not head or not head.next:
        return head
    odd = head
    even = head.next
    even_head = even
    while even and even.next:
        odd.next = even.next
        odd = odd.next
        even.next = odd.next
        even = even.next
    odd.next = even_head
    return head

n = int(input("Enter the number of elements: "))
arr = list(map(int, input("Enter the elements: ").split()))
head = array_to_LL(arr)
head = odd_even_index_LL(head)
print_LL(head)