class Node:
    data = None
    next = None

    def __init__(self,val):
        self.data = val
        self.next = None 

def array_LL(arr):
    head = Node(arr[0]) 
    curr = head
    for i in range(1,len(arr)):
        curr.next = Node(arr[i])
        curr = curr.next
    return head 

def print_LL(head):
    curr = head
    while curr is not None:
        print(curr.data,end=" ")
        curr = curr.next
    print() 

def find_middle_of_LL(head):
    if head is None or head.next is None:
        return None
    slow = head
    fast = head
    while(fast is not None and fast.next is not None):
        slow = slow.next
        fast = fast.next.next
    return slow

n = int(input("Enter the number of elements: "))
arr = list(map(int, input("Enter the elements: ").split()))
head = array_LL(arr)
print_LL(head)
middle = find_middle_of_LL(head)
if middle is not None:
    print("Middle element:", middle.data)
else:
    print("The linked list is empty or has only one element.")