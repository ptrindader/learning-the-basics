
def mostrar_A_ate_B(texto, x, y):
    texto_final = texto[x : y]
    return texto_final


texto = input("\nDigite o texto: ")
while True:
    comando = int(input("\n" \
    "O que quer fazer a seguir?" \
    "\n=-=-=-=-=-=-=-=-=-=-=-=-=-" \
    "\n1 - Mostrar os 10 primeiros caracteres." \
    "\n2 - Mostrar os 10 últimos caracteres." \
    "\n3 - Inverter a frase." \
    "\n4 - Mostrar apenas os caracteres de índice par." \
    "\n5 - Mostrar apenas os caracteres de índice ímpar." \
    "\n6 - Mostrar do índice A até o índice B." \
    "\n0 - Sair" \
    "\n=-=-=-=-=-=-=-=-=-=-=-=-=-" \
    "\n" \
    "\nComando: "))
    match comando:
        case 0:
            break
        case 1:
            primeirosDez = texto[0:10]
            print(f"Resultado: {primeirosDez}")
        case 2:
            ultimosDez = texto[len(texto) - 10:]
            print(f"Resultado: {ultimosDez}")
        case 3:
            inverte = texto[::-1]
            print(f"Resultado: {inverte}")
        case 4:
            indexPar = texto[0::2]
            print(f"Resultado: {indexPar}")
        case 5:
            indexImpar = texto[1::2]
            print(f"Resultado: {indexImpar}")
        case 6:
            A = int(input())
            B = int(input())
            resultado = mostrar_A_ate_B(texto, A, B)
            print(f"Resultado: {resultado}")