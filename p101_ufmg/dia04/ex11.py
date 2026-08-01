import math

def fatorial_iterativo_laco(n):
    resultado = 1

    for i in range(n, 1, -1):
        resultado *= i

    return resultado

def fatorial_iterativo_math(n):
    return math.factorial(n)


x = int(input())
fat_for = fatorial_iterativo_laco(x)
fat_math = fatorial_iterativo_math(x)

if fat_for == fat_math:
    print("Resultados iguais.")
else:
    print("Resultados DIFERENTES.")

print(f"Fatorial laço: {fat_for}")
print(f"Fatorial math: {fat_math}")