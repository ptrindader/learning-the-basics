lista = [(int(input())) for _ in range(10)]

print(lista)

num = int(input("Quer remover qual número? "))

# while True:
#     if num in lista:
#         lista.remove(num)
#     else:
#         break

while num in lista:
    lista.remove(num)

print(lista)