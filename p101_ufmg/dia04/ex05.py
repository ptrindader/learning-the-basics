def eh_par(numero):
    if numero % 2 == 0:
        return True
    else:
        return False

x = int(input())
resultado = eh_par(x)

if resultado == True:
    print("Par")
else:
    print("Ímpar")