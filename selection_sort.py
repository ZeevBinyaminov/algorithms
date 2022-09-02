def find_smallest(arr: list) -> int:  # нахождение индекса наименьшего элемента массива
    smallest_elem = arr[0]
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest_elem:
            smallest_elem = arr[i]
            smallest_index = i
    return smallest_index


find_smallest([0, 1, 2, 5, 3, 2, 1, -2, 32])


def selection_sort(arr: list) -> list:  # сортировка выбором с помощью нахождения индекса наименьшего элемента
    # и последующего его переноса (удаления из старого и перенос в новый массивы)
    # в новый массив элементов
    sorted_arr = []
    for i in range(len(arr)):
        smallest = find_smallest(arr)
        sorted_arr.append(arr.pop(smallest))
    return sorted_arr


selection_sort([4, 2, 1, -5, 3, 5, 321, 32])
