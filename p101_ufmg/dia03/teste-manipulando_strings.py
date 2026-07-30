frase1 = "Olá! Tudo bem?"
print(frase1)

tamanho = len(frase1)
print(tamanho)

frase2 = frase1[0:4:1]
print(frase2)

frase3 = frase1[0:4:2]
print(frase3)

frase4 = frase1[::-1]
print(frase4)

# "Len" retorna o tamano da string.
# 
# Nessa estrutura de colchetes (slicing),
# o primeiro valor define o começo
# do "fatiamento", o segundo define
# o final e o terceiro define o
# tamanho do passo.
# [inicio:fim:passo]
#
# Valores negativos invertem o sentido
# do passo. Ou seja, vai de trás pra frente. 