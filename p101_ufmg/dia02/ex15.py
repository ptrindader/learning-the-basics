while True:
    divisores = []
    x = int(input())
    if x == -1:
        print("Programa finalizado.")
        break
    else:
        for i in range(1, x + 1):
            divisor = i
            resto = x % divisor
            if resto == 0:
                divisores.append(divisor)
        print(f"{divisores}")
        if divisores == [1, x]:
            print("É primo.\n")
        else:
            print("Não é primo.\n")
        continue