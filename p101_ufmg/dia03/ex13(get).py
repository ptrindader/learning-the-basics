lista = [int(input()) for _ in range(12)]

print("")
print(lista)
print("")

contagem = {}
for num in lista:
    contagem[num] = contagem.get(num, 0) + 1

# O "for", para cada elemento da lista, chama o dicionário "contagem".
# 
# Chamado o dict, cria a chave "num" e atribui
# como VALOR à chave "num" o resultado da função get(),
# que faz o seguinte:
# 
# Busca o VALOR da chave "num" (primeiro argumento),
# e, caso não ache, retorna zero. 
# 
# Ou seja: se NAO EXISTIR essa chave "num" (no caso, um número
# que não tenha aparecido), ele vai ter criado essa chave agora
# e atribuído 1 (ou 0 + 1) a ela. Se existir, ele só soma 1
# ao valor da chave.  
#  
# dicionario.get(chave, valor_padrao)
 

for k, qtde in contagem.items():
    if qtde > 1:
        print(f"O número '{k}' aparece {qtde} vezes.")
    else:
        print(f"O número '{k}' aparece uma vez.")