lista_nums = []
positivos = 0
negativos = 0

while True:
    x = int(input())
    if x == 0:
        break
    else:
        lista_nums.append(x)

positivos = sum(1 for n in lista_nums if n > 0)
negativos = sum(1 for n in lista_nums if n < 0)
diferenca = abs(positivos - negativos)

print("")
print(f"{positivos} positivo(s).")
print(f"{negativos} negativo(s).")

if positivos > negativos:
    print("Houveram mais positivos.")
elif positivos < negativos:
    print("Houveram mais negativos.")
else:
    print("Houve o mesmo número de positivos e negativos.")


if diferenca != 0:
    print(f"A diferença foi de {diferenca} número(s).")
    
print("")