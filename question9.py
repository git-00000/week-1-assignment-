def frequency_count(arr):
    n = len(arr)
    result = [0] * n  

    for num in arr:
        if 1 <= num <= n:
            result[num - 1] += 1  

    return result

arr1 = [2, 3, 2, 3, 5]


print("Output:", frequency_count(arr1))  

