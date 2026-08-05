def permutacoes(texto):
    if len(texto) <= 1:
        return [texto]
    else:
        lista = []
        for i in range(len(texto)):
            pivo = texto[i]
            resto = texto[:i] + texto[i+1:]
            subperm = permutacoes(resto)
            lista.append(pivo + subperm)
        return lista

x = input()

print(permutacoes(x))