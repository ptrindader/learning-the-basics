vetor1 = [1, 2, 3]
vetor2 = [2, 3, 4]

soma = [a + b for a, b in zip(vetor1, vetor2)]
print(soma)
# A função ZIP associa os índices
# dos vetores. No caso, é como se criasse
# uma estrutura assim na memória:
# [(1, 4), (2, 3), (3, 4)].

# Depois, o "for" define as variáveis
# e o que vai ser feito com elas. No caso, somá-las.

mult_escalar = [2 * elemento for elemento in vetor1]
print(mult_escalar)
