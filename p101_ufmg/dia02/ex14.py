lista_notas = []

while True:
    nota = int(input())
    if nota == -1:
        break
    elif nota not in [-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
        print("Nota Inválida.")
    else:
        lista_notas.append(nota)

print(lista_notas)

qtde = len(lista_notas)
soma = sum(lista_notas)
media = soma / qtde

maior = max(lista_notas)
menor = min(lista_notas)

print(f"Qtde. de respostas: {qtde}.")
print(f"Média das notas: {media:.2f}")
print(f"Maior nota: {maior:.1f}")
print(f"Menor nota: {menor:.1f}")


# lista_notas = []
# nota = 0
# soma = 0
# i = 0

# while nota != -1:
#     nota = int(input())
#     lista_notas.append(nota)
#     soma += nota
#     i += 1

# lista_notas.remove(-1)
# print(lista_notas)

# print(f"{i-1} notas")

# media = soma / len(lista_notas)
# print(f"Media: {media:.2f}")

# lista_notas.sort(reverse = True)
# print(f"Maior: {lista_notas[0]}")
# i -= 2
# print(f"Menor: {lista_notas[i]}")
