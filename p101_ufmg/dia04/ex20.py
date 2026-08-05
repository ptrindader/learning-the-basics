def permutacoes(texto):
    if len(texto) <= 1:
        return [texto]
    else:
        lista = []
        for i in range(len(texto)):
            pivo = texto[i]
            resto = texto[:i] + texto[i+1:]
            subperm = permutacoes(resto)
            for sub in subperm:
                palavra_completa = (pivo + sub)
                if palavra_completa not in lista:
                    lista.append(palavra_completa)
        return lista

palavra = input()
lista_final = list(set(permutacoes(palavra)))

print(lista_final)
print(len(lista_final))