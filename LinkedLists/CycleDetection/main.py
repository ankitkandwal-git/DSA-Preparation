
class Node:
    def __init__(self,val):
        self.data = val
        self.next = None

def arrayToLL(arr):
    head = Node(arr[0])
    cur = head
    for i in range(1,len(arr)):
        cur.next = Node(arr[i])
        cur = cur.next 
    return head

def printLL(head):
    cur = head
    while cur is not None:
        print(cur.data, end=" ")
        cur = cur.next
    print()


def detectCycle(head):
    if head is None or head.next is None:
        return None
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return slow
    return None

n = int(input("Enter the size of LL: "))
arr = list(map(int, input("Enter the elements of LL: ").split()))
head = arrayToLL(arr)
printLL(head)
cycle_node = detectCycle(head)
if cycle_node:
    print(f"Cycle detected at node with value: {cycle_node.data}")
else:
    print("No cycle detected")
