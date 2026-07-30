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