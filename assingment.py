def find_largest(arr):
    max_element = arr[0]
    for num in arr[1:]:
        if num > max_element:
            max_element = num
    return max_element


print("Largest:", find_largest([1, 8, 7, 56, 90])) 
