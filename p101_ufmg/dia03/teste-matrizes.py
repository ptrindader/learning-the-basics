matriz = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]
# Matrizes são listas de listas.

elemento = matriz[1][2]
print(elemento)
# Para retornar um elemento específico,
# seguimos a estrutura:
# matriz[indice linha][indice elemento].

nova_linha = [10, 11, 12]
matriz.append(nova_linha)
print(matriz)
# Adição de Linha

for linha in matriz:
    linha.append(0)
print(matriz)
# Adição de Coluna