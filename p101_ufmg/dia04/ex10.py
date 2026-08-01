import random

lista = [random.randint(1, 6) for _ in range(100)]

lista.sort()
print(lista)

contagem = {}
for num in lista:
    contagem[num] = contagem.get(num, 0) + 1

    # if num in contagem:
    #     contagem[num] += 1
    # else:
    #     contagem[num] = 1

print("")
for k, qtde in contagem.items():
    print(f"Face {k}: {qtde} vez(es).")
print("")