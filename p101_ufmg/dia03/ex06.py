lista_notas = []

for i in range(0, 7):
    nota = float(input())
    lista_notas.append(nota)

maior = max(lista_notas)
menor = min(lista_notas)

qtde = len(lista_notas)
soma = sum(lista_notas)

media = soma/qtde

print(lista_notas)
print(f"Maior nota: {maior}")
print(f"Menor nota: {menor}")
print(f"Média: {media:.2f}")