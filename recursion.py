def mysum(arr):
    if arr == []:
        return 0
    return arr[0] + mysum(arr[1:])


mysum([1, 2, 3])


def mylen(arr):
    if arr == []:
        return 0
    return 1 + mylen(arr[1:])


mylen([])


def mymax(arr):
    if arr == []:
        return 0
    if len(arr) == 2:
        return arr[0] if arr[0] > arr[1] else arr[1]
    submax = mymax(arr[1:])
    return arr[0] if arr[0] > submax else submax


mymax([])
