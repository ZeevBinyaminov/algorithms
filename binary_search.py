# Алгоритм бинарного поиска - поиск индекса элемента. <br>
# Необходима отсортированная по возрастанию последовательность,<br> которая с каждой итерацией будет уменьшаться в два раза,
# <br> пока не найдет искомый индекс или не переберет всю последовательность.

lst = [i for i in range(0, 1000)]


def binary_search(lst: list, item: int) -> int:
    low = 0
    high = len(lst) - 1

    while low <= high:
        middle = (low + high) // 2
        guess = lst[middle]
        if guess == item:
            return middle  # базовый случай, нахождение искомого числа
        if guess > item:
            high = middle - 1  # отсекаем бОльшую (правую) половину
        else:
            low = middle + 1  # отсекаем меньшую (левую) половину
    return None


binary_search([1, 2, 3, 4, 5, 6, 7], 7)


# Моя реализация
def binary_search(nums, search):
    length = len(nums)
    low = 0
    high = length - 1
    while low <= high:
        middle = (low + high) // 2
        if search == nums[middle]:
            return middle
        if search > nums[middle]:
            low = middle + 1
        else:
            high = middle - 1
    return None


binary_search([1, 2, 4], -1)
