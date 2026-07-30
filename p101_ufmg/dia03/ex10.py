nomes = ()
for i in range(0, 5):
    nome = input()
    idade = int(input())

    tupla_atual = (nome, idade)
    nomes += (tupla_atual)

print(nomes)