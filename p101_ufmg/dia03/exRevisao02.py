x = int(input())

soma = 0
if x < 0:
    print("Insira um número positivo.")
else:
    for i in range(1, x + 1, 2):
        soma += i
        print(i)
    print("")
    print(f"Soma = {soma}")