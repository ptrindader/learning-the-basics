texto = input("Digite o texto: ")
comando = int(input("O que quer fazer a seguir?" \
"\n=-=-=-=-=-=-=-=-=-=-=-=-=-" \
"\n1 - Mostrar os 10 primeiros caracteres." \
"\n2 - Mostrar os 10 últimos caracteres." \
"\n3 - Inverter a frase." \
"\n4 - Mostrar apenas os caracteres de índice par." \
"\n5 - Mostrar apenas os caracteres de índice ímpar." \
"\n6 - Mostrar do índice A até o índice B." \
"\n0 - Sair" \
"\n"))

primeirosDez = texto[0:10]
ultimosDez = texto[len(texto) - 10:]
inverte = texto[::-1]
indexPar = texto[0::2]
indexImpar = texto[1::2]

def mostrar_A_ate_B(x, y):
    mostra_texto_final = print(texto[x : y])
    return mostra_texto_final


while True:
    match comando:
        case 0:
            break
        case 1:
            print(primeirosDez)
        case 2:
            print(ultimosDez)
        case 3:
            print(inverte)
        case 4:
            print(indexPar)
        case 5:
            print(indexImpar)
        case 6:
            A = int(input())
            B = int(input())
            print(mostrar_A_ate_B(A, B))