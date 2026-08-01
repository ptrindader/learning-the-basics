def maior_de_tres(a, b, c):
    if a >= b and a >= c:
        return a
    elif b >= a and b >= c:
        return b
    else:
        return c

def maior_de_tres_max(a, b, c):
    return max(a, b, c)

lista = [int(input()) for _ in range(3)]

resultado_comp = maior_de_tres(lista[0], lista[1], lista[2])
resultado_max = maior_de_tres_max(lista[0], lista[1], lista[2])

if resultado_comp != resultado_max:
    print(f"\nOs valores divergem.\n")
else:
    print("Resultados iguais.")

print(f"Resultado Comparação: {resultado_comp}\n" \
f"Resultado Max: {resultado_max}\n")
