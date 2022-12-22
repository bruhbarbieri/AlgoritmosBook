def pesquisa_binaria(list, item):
    baixo = 0
    alto = len(list) - 1

    while baixo <= alto:
        meio = (baixo + alto) // 2
        chute = list[meio]
        if chute == item:
            return meio
        if chute > item:
            alto = meio - 1
        else:
            baixo = meio + 1
    return None

lista = [1, 3, 5, 7, 9]

print (pesquisa_binaria(lista, 3))
print (pesquisa_binaria(lista, -1))

