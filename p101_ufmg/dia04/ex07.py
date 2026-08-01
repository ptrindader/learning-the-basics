def area_retangulo(base, altura=1):
    return base * altura

b = int(input())
h = int(input())

resultado1 = area_retangulo(b, h)
resultado2 = area_retangulo(b)

print(f"\nCom altura informada: {resultado1}")
print(f"Com altura padrão: {resultado2}\n")