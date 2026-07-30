lista_nomes = []
lista_tels = []
cont = 0


while cont < 3:
    nome = input()
    lista_nomes.append(nome)

    tel = int(input())
    lista_tels.append(tel)
    cont += 1

nome_pedido = input()

if nome_pedido not in lista_nomes:
    print("Contato não encontrado")
else:
    indice_nome_pedido = lista_nomes.index(nome_pedido)

    tel_pedido = lista_tels[indice_nome_pedido]
    print(tel_pedido)

