n = int(input())

def fatorial(n):
    if n < 0:
        return "Entrada Inválida"
    elif n == 0 or n == 1:
        return 1
    else:
        return n * fatorial(n - 1)

print(fatorial(n))