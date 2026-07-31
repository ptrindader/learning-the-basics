import matplotlib.pyplot as plt

x = [i for i in range(1, 11)]
y = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
plt.figure(figsize=(10, 6))
plt.scatter(x, y, color='purple')
plt.title('Exemplo')
plt.xlabel('Eixo X')
plt.ylabel('Eixo y')
plt.savefig('/Users/ptrindader/Desktop/teste/scatter_exemplo.png')
