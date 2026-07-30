vetor = []

for i in range(0, 7):
    x = int(input())
    vetor.append(x)

print(vetor)
y = int(input("Procure um valor no vetor: "))

if y not in vetor:
    print("Não está no vetor.")
else:
    print(f"Sim, {y} está no vetor.")
    indexY = vetor.index(y)
    vetor.count(indexY)
    print(f"Índice: {indexY}")