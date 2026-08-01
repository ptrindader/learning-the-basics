def fatorial_recursivo(n):
    if n < 0: 
        return "Entrada Inválida"
    elif n == 0 or n == 1:
        return 1
    else:
        return n * fatorial_recursivo(n - 1)

x = int(input())
print(fatorial_recursivo(x))