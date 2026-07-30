matriz = []
diagonalPrincipal = []

for i in range(0, 4):
    linha = []
    for j in range(0, 4):
        x = int(input())
        linha.append(x)
        if i == j :
            diagonalPrincipal.append(x)
    matriz.append(linha)

soma_diagonalPrincipal = sum(diagonalPrincipal)

print(matriz)
print(diagonalPrincipal)
print(soma_diagonalPrincipal)