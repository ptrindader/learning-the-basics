lista = ["pao", "queijo", 12]
print(lista)

primeiro_item = lista[0]
print(primeiro_item)

lista.append(True)
print(lista)

lista.remove(True)
print(lista)

lista.pop(0)
print(lista)


# Listas começam no índice 0
# O "append" adiciona o item no final.
# O "remove" remove o item POR VALOR
# O "pop" remove o item POR ÍNDICE

# lista = []
# for i in range(1,11):
#     lista.append(i)

lista1 = list(range(1, 11))
print(lista1)

lista2 = [i for i in range(1, 11)]
print(lista2)