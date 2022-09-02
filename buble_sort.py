def buble_sort(arr: list):
    length = len(arr)
    for i in range(length):
        for j in range(length - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr
numbers = [44, 1, 2, 55, 2, -4]
print(buble_sort(numbers))