matriz = []

for i in range(0, 3):
    linha = []
    for j in range (0, 3):
        x = int(input())
        linha.append(x)
    matriz.append(linha)

soma = 0
for i in matriz:
    for j in linha:
        soma += j

print(matriz)
print(f"A soma dos valores é {soma}")