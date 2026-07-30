A = 0
B = 0
C = 0
branco = 0
nulo = 0
invalidos = 0
total = 0

while True:
    voto = int(input())  
    if voto == 0:
        break  
    elif voto == 1:
        A += 1
        total += 1

    elif voto == 2:
        B += 1
        total += 1

    elif voto == 3:
        C += 1
        total += 1

    elif voto == 4:
        branco += 1
        total += 1

    elif voto == 5:
        nulo += 1
        total += 1

    else:
        print("Voto Inválido")
        invalidos += 1

list_votos = [A, B, C]
maior_num_votos = max(list_votos)
print(maior_num_votos)

if list_votos.count(maior_num_votos) > 1:
    vencedor = "Empate"

elif maior_num_votos == A:
    vencedor = "Candidato A"

elif maior_num_votos == B:
    vencedor = "Candidato B"

else:
    vencedor = "Candidato C"
    

print("")
print(f"Vencedor: {vencedor}")
print("")
print(f"CANDIDATO A: {A}")
print(f"CANDIDATO B: {B}")
print(f"CANDIDATO C: {C}")
print("")
print(f"Brancos: {branco}")
print(f"Nulos: {nulo}")
print(f"Inválidos: {invalidos}")
print("")
print(f"Total de Votos: {total}")
