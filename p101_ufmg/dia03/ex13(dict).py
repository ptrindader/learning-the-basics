lista = [int(input()) for _ in range(12)]

print("")
print(lista)
print("")

contagem = {}
for num in lista:
    if num in contagem:
        contagem[num] += 1 # Soma 1 no VALOR da chave.
    else:
        contagem[num] = 1 # Cria a chave [num] e dá a ela o VALOR 1.


for k, qtde in contagem.items():
    if qtde > 1:
        print(f"O número '{k}' aparece {qtde} vezes.")
    else:
        print(f"O número '{k}' aparece uma vez.")

# O ".items()" separa a chave e o valor, entregando-os em uma
# tupla para cada conjunto (chave, valor).
# 
# Ou seja, vai de:
# {1: 4, 2: 3} ----> [(1,4), (2,3)]
# 
# Depois, com o "for", ele "desempacota" a tupla
# (chave, valor) em duas variáveis (k, qtde) diferentes.