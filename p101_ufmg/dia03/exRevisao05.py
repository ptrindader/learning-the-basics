produtos = []

while True:
    preco = float(input())
    if preco == 0:
        break
    else:
        produtos.append(preco)

qtde = len(produtos)
total = sum(produtos)
media = total / qtde

print(qtde)
print(total)
print(media)