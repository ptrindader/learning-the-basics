vetor = []

for i in range(0, 12):
    x = int(input())
    vetor.append(x)

for i in range(0, len(vetor)):
    a = vetor.count(vetor[i])
    vetorNobo = set(vetor)
    print(f"Numero: {vetor[i]}")
    print(f"Qtde: {a}")
    print("")