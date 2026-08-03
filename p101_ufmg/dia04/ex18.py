def busca_binaria(lista, valor, inicio, fim, cont=0):
    cont += 1
    if inicio > fim:
        return -1

    indice_meio = (inicio + fim) // 2
    meio = lista[indice_meio]
    
    if meio == valor:
        return indice_meio, cont
    
    elif meio < valor:
        return busca_binaria(lista, valor, indice_meio + 1, fim, cont)
    
    elif meio > valor:
        return busca_binaria(lista, valor, inicio, indice_meio - 1, cont)


lista_nums = [int(i) for i in range(100)] 
print(lista_nums)

resultado_bin, cont_bin = busca_binaria(lista_nums, 73, 0, )