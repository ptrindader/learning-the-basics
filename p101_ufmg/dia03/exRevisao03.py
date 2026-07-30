cont = 0
lista_num = []

while cont < 10:
    x = int(input(f"{cont + 1}º número: "))
    lista_num.append(x)
    cont += 1

print("")
print(lista_num)
print(f"Maior número: {max(lista_num)}")