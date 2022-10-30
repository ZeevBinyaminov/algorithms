def my_rle(string: str) -> str:
    def pack(string: str, counter: int):
        if counter > 1:
            return string + str(counter)
        return string 

    ans = []
    sym = string[0]
    counter = 1
    for i in range(1, len(string)):
        if string[i] == sym:
            counter += 1
        else:
            ans.append(pack(sym, counter))
            sym = string[i]
            counter = 1    

    ans.append(pack(sym, counter))
    return ''.join(ans)

print(my_rle("AAABBSSSS"))


