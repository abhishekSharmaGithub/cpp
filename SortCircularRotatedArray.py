
# function to reverse the array list
def reverse_array(arr, start=0, end=0):
    if end == 0:
        end = len(arr)-1
    while start<=end:
        temp = arr[start]
        arr[start] = arr[end]
        arr[end] = temp
        start += 1
        end -= 1

# function to sort cicular roated array list
def sort_circular_rotated_array(arr):
    index_smallest = 0
    for i in range(len(arr)-1):
        if arr[i]>arr[i+1]:
            index_smallest = i+1
            break

    reverse_array(arr=arr, end=index_smallest-1)
    reverse_array(arr=arr, start=index_smallest)
    reverse_array(arr=arr)
    return arr


arr = [3, 4, 5, 1, 2]
print(sort_circular_rotated_array(arr))

