import re

def busca_binaria(lista, valor, inicio, fim, cont=0):
    cont += 1
    if inicio > fim:
        return -1, cont

    indice_meio = (inicio + fim) // 2
    meio = lista[indice_meio]
    
    if meio == valor:
        return indice_meio, cont
    
    elif meio < valor:
        return busca_binaria(lista, valor, indice_meio + 1, fim, cont)
    
    elif meio > valor:
        return busca_binaria(lista, valor, inicio, indice_meio - 1, cont)

def busca_linear(lista, valor):
    cont = 0
    for i in range(len(lista)):
        cont += 1
        if valor == lista[i]:
            return i, cont
    return -1, cont


frase = input("Digite o que deseja no formato: '" \
"lista de X a Y, procurando Z': ")

valores = list(map(int, re.findall(r'\d+', frase)))
'''Extrai da entrada SOMENTE os números,
os armazena em uma lista, os transforma (com o map())
em inteiros (pois são armazenados como str()) para,
no fim, formarem uma lista (já que o map() não gera
lista.)'''

x = valores[2]
inicio = valores[0]
fim = valores[1]
'''Aqui ele pega os valores da entrada que foram
armazenados na lista "valores" e os transforma
em variáveis mais fáceis de interpretar.'''

lista_nums = [int(i) for i in range(inicio, fim + 1)] 
'''Cria a lista de números com base nos valores pedidos
na entrada e associados às varoáveis "início" e "fim".'''

resultado_bin, cont_bin = busca_binaria(lista_nums, x, 0, len(lista_nums) - 1)
resultado_lin, cont_lin = busca_linear(lista_nums, x)
'''Como as partes QUE FINALIZAM AS FUNÇÕES (ou seja,
que não são retornos recursivos) retornam duas coisas
(o índice do valor procurado e a contagem de comparações)`
aqui associamos essas saídas a duas variáveis em cada
tipo de busca (duas para a binária e duas para a linear).'''

print(f"Encontrado no índice {resultado_bin}")
print(f"Busca Binária: {cont_bin} comparações")
print(f"Busca Linear: {cont_lin} comparações")