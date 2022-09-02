def quick_sort(arr):
    if len(arr) < 2:
        return arr
    # лучше в качестве опорного элемента выбирать случайный, выше вероятность лучшего (среднего) случая
    pivot = arr[0]  # опорный элемент, по нему числа будут делиться на 2 подмассива
    less = [i for i in arr[1:] if i <= pivot]  # <= потому что могут быть числа равные опорному элементу
    greater = [i for i in arr[1:] if i > pivot]
    return quick_sort(less) + [pivot] + quick_sort(greater)


quick_sort([3, 4, 2, 4, 12, 3, 3])
