matriz = []
lista_maioresDeLinha = []

for i in range(0, 5):
    linha = []

    for j in range(0, 5):
        x = int(input())
        linha.append(x)

    maiorDaLinha = max(linha)
    lista_maioresDeLinha.append(maiorDaLinha)
    matriz.append(linha)

maior = max(lista_maioresDeLinha)
linhaMaior = lista_maioresDeLinha.index(maior)
colunaMaior = matriz[linhaMaior].index(maior)

print(f"Maior valor: {maior}")
print(f"LINHA do maior valor: {linhaMaior + 1}")
print(f"COLUNA do maior valor: {colunaMaior + 1}")
