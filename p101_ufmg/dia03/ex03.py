cont = 0
lista_nums = []

while cont < 10:
    x = int(input())
    lista_nums.append(x)
    cont += 1

lista_nums.sort(reverse = True)

print('')
for i in lista_nums:
    print(i)