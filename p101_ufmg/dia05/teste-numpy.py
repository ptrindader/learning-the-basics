import numpy as np

lista = [1, 2, 3, 4, 5, 6]

arr = np.array(lista)
# Transforma a lista em array.

print(arr)

arr.reshape((2, 3))
print(arr)
# Transforma o vetor
# numa matriz 2x3.

print(arr.T)
# Calcula a transposta da matriz. 

media = np.mean(arr)
print(media)

desvPadrao = np.std(arr)
print(desvPadrao)

# -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

matrix = np.array([[1, 2],[3, 4]])
print(matrix)

inversa = np.linalg.inv(matrix)
print(inversa)