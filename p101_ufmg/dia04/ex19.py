def hanoi(n, origem, destino, auxiliar):
    if n == 1:
        print(f"Move o disco {n} de {origem} para {destino}.")
        return 1
    else:
        movimento_1 = hanoi(n - 1, origem, auxiliar, destino)
        print(f"Move o disco {n} de {origem} para {destino}.")
        movimento_2 = hanoi(n - 1, auxiliar, destino, origem)
        return movimento_1 + 1 + movimento_2

x = int(input())
resultado = hanoi(x, "A", "C", "B")
print(f"Total: {resultado} movimento(s).")