def find_missing_element(arr,n):
    xor1 = 0
    xor2 = 0
    for i in range(0,n-2):
        xor1 ^=arr[i]

    for i in range(0,n):
        xor2 ^= (i+1)

    return xor1 ^ xor2

n = int(input("Enter the number of elements: "))
arr = [int(x) for x in input("Enter the elements: ").split()]
print("The missing element is:", find_missing_element(arr,n))