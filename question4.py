# Move All Zeroes to End

def move_zeros_to_end(arr):
    j = 0  

    for i in range(len(arr)):
        if arr[i] != 0:
            arr[j] = arr[i]
            j += 1

    while j < len(arr):
        arr[j] = 0
        j += 1

arr = [1, 2, 0, 4, 3, 0, 5, 0]
move_zeros_to_end(arr)
print("Output:", arr)
