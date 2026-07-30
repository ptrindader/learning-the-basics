x = int(input())
divisores = []

for i in range(1, x):
    if x % i == 0:
        divisores.append(i)

soma = sum(divisores)

print("")
if soma == x:
    print(f"{x} é um número PERFEITO!")
else:
    print(f"{x} não é um número perfeito.")
print("")
