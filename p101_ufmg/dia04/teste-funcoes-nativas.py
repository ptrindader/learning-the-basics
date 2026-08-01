vetor = [3, 8, 9, 20, 1]
vetor.sort()
print(vetor)
# Organiza o vetor em ordem crescente. (Para 
# descrescente, adicionar argumento "ascendent=false") 

mensagem = str(input())

maiuscula = mensagem.upper()
print(maiuscula)

minuscula = mensagem.lower()
print(minuscula)

palavras = mensagem.split()
print(palavras)
# Divide a string com base nos espaços
# e cria um vetor com as palavras.

palavrasVirgula = mensagem.split(',')
print(palavrasVirgula)
# Define um divisor para a string,
# Com base nele, ele vai dividir
# somenta as palavras que estiverem
# separadas por esse vetor, ignorando
# até os espaços.

mensagem_nova = '......'.join(palavras)
print(mensagem_nova)
# Pega elementos de um vetor e junta
# com o que você quiser entre eles.
