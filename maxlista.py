def max(lista):
    if len(lista) == 0:
        return None
    if len(lista) == 1:
        return lista[0]
    else:
        sub_max = max(lista[1:])
        return lista[0] if lista[0] > sub_max else sub_max

print(max([1, 3, 5, 2]))