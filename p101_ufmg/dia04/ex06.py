import math

def media(numeros):
    if len(numeros) == 0:
        return 0
    else:
        # return math.mean(numeros) ---- Exercício pediu pra usar SUM e LEN
        return sum(numeros)/len(numeros)

x = input()
lista = list(map(int, x.split()))

resultado = media(lista)
print(f"Média: {resultado}")