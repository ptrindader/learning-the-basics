# lista = []
# for i in range(12):
#     x = int(input())
#     lista.append(x)

lista = [int(input()) for _ in range(12)]

print("")
print(lista)
print("")

# lista_nums = []
# for y in lista:
#     if y not in lista_nums:
#         lista_nums.append(y)

lista_nums = set(lista)

for k in lista_nums:
    qtde = lista.count(k)
    if qtde > 1:
        print(f"O número '{k}' aparece {qtde} vezes.")
    else:
        print(f"O número '{k}' aparece uma vez.")