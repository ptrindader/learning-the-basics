nums = []
pesos = []

for i in range(0, 4):
    num = float(input())
    nums.append(num)

    peso = int(input())
    pesos.append(peso)

soma_pesos = sum(pesos)
nota_x_peso = sum([a * b for a, b in zip(nums, pesos)])
mediaPonderada = nota_x_peso / soma_pesos

print(f"Média Ponderada = {mediaPonderada}")