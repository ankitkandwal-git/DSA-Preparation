def max_consecutive_ones(arr,n):
    count = 0
    curr = 0
    for i in range(n):
        if arr[i]==1:
            count+=1
            if count>curr:
                curr = count 

        else:
            count = 0
    return curr 

n = int(input("Enter the size of array: "))
arr = list(map(int, input("Enter the elements of array: ").split()))
print("Maximum consecutive ones:", max_consecutive_ones(arr, n))
