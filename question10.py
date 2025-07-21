def reverse_array(arr):
    start = 0
    end = len(arr) - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
    return arr

n = int(input("Enter size of array: "))            
arr = list(map(int, input("Enter elements: ").split()))  

if len(arr) != n:
    print("Error: Number of elements doesn't match the given size.")
else:
    result = reverse_array(arr)
    print("Reversed array:", *result)
