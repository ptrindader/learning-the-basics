def fibonacci(n):
    # if n == 0:
    #     return 0
    # elif n == 1:
    #     return 1
    # elif n == 2:
    #     return 1
    # else:
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

x = int(input())

for i in range(0, x + 1):
    resultado = fibonacci(i)
    print(resultado)