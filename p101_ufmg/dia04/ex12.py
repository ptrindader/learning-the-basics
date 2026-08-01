# ler varios nomes
# guarda nomes na lista
# imprime lista em ORDEM ALFABETICA usando sorted()
# imprime lista em ordem crescente de tamanho usando sorted(nomes, key=len)
# lista original se mantem a mesma 

lista_nomes = []

# while True:
#     nome = input()
#     if nome == "":
#         break
#     lista_nomes.append(nome)

while (nome := input()) != "":
    lista_nomes.append(nome)

print(sorted(lista_nomes))
print(sorted(lista_nomes, key=len))

'''Esse operador Walrus (:=) basicamente executa a expressão
(parte da direita) e atribui o resultado à variável (que está
à esquerda). Ou seja, ele pega o que foi digitado e guarda 
em "nome".

Diferente do operador "recebe" (=), o Walrus não só
atribui o resultado da expressão à variável como
retorna esse valor. Em outras palavras, enquanto escrever
nome = input() só associa a entrada à variável "nome"
mas não retorna nada (a não ser que você chame a variável
de novo em algum lugar, como "len(nome)"), o Walrus já
retorna esse mesmo valor. 

É como se eu tivesse definido anteriormente o valor para "nome" 
e estivesse simplesmente chamando "nome" sozinho no while, mas
estou fazendo as duas coisas ao mesmo tempo com o ":=".'''