def busca_binaria(lista, valor, inicio, fim):
    # Lista ordenada
    # Pesquisa um valor
    # Retorna o índica de valor (ou -1 se nao encontrar).

    # Olhar o elemento do meio
    # Se for maior que o valor, ir para a primeira parte da lista.
    # Se for menor que o valor, ir para a segunda parte da lista.
    lista = lista.sort
    indice_meio = (inicio + fim) // 2
    meio = lista[indice_meio]
    if meio == valor:
        return indice_meio
    elif valor not in lista:
        return -1
    elif meio < valor:
        inicio = indice_meio + 1
        return busca_binaria(lista, valor, inicio, fim)
    elif meio > valor:
        fim = indice_meio - 1
        return busca_binaria(lista, valor, inicio, fim)

lista_nums = [int(i) for i in range(100)]
print(lista_nums)

resultado = busca_binaria(lista_nums, 38, 0, "")

print(resultado)