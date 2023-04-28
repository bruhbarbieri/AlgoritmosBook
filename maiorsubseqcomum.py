palavra_a = ["f", "o", "s", "h"]
palavra_b = ["f", "i", "s", "h"]
celula = [[0 for i in range(len(palavra_a))] for i in range(len(palavra_b))] # (5,4)
print(celula)

for i in range(len(palavra_a)):
    for j in range(len(palavra_b)):
        if palavra_a[i] == palavra_b[j]:
            celula[j][i] = celula[j-1][i-1] + 1
        else:
            celula[j][i] = max(celula[j-1][i], celula[j][i-1])

print(celula)