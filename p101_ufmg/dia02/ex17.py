lista_tempoAtletas = []

while True:
    tempo = int(input())
    if tempo == 0:
        break
    elif tempo < 0:
        print("Inválido")
    else:
        lista_tempoAtletas.append(tempo)

media = sum(lista_tempoAtletas)/len(lista_tempoAtletas)

melhorTempo = min(lista_tempoAtletas)
piorTempo = max(lista_tempoAtletas)


abaixoDaMedia = 0
atleta = 1
print("\n")
for tempoIndividual in lista_tempoAtletas:
    print(f"Atleta {atleta}: {tempoIndividual}s")
    atleta += 1
    if tempoIndividual < media:
        abaixoDaMedia += 1

print("")
if lista_tempoAtletas.count(melhorTempo) > 1:
    print(f"Melhor Tempo: Empate ({melhorTempo}s)")
else:
    melhorAtleta = lista_tempoAtletas.index(min(lista_tempoAtletas)) + 1
    print(f"Melhor Tempo: ATLETA {melhorAtleta} ({melhorTempo}s)")

if lista_tempoAtletas.count(piorTempo) > 1:
    print(f"Pior Tempo: Empate ({piorTempo}s)")
else:
    piorAtleta = lista_tempoAtletas.index(max(lista_tempoAtletas)) + 1
    print(f"Pior Tempo: ATLETA {piorAtleta} ({piorTempo}s)")


print("")
print(f"Média: {media:.3f}s")
print(f"Atletas abaixo da média: {abaixoDaMedia}")
print("\n")