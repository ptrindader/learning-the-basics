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

print("")
print(f"{qtde} produtos.")
print(f"Valor Total: R$ {total:.2f}")
print(f"Preço Médio: R$ {media:.2f}")
print("")