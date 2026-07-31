import matplotlib.pyplot as plt

data_histogram = [1, 2, 2, 3, 4, 5, 5, 5, 5]
plt.figure(figsize = (10, 6))
# Tamanho da tela. No caso, POLEGADAS (inch).
# figsize = (Largura x Altura).

# Por padrão, o tamanho final será calculado em
# DPI de 100, que é calculado multiplicando o valor
# em polegadas x 100 DPI. 

# Ex: Largura --> 10 inch x 100 DPI = 1000px
# Ex: Altura --> 6 inch x 100 DPI = 600px

plt.hist(data_histogram, bins=35, color='skyblue')
# Constrói o gráfico em si.
# O primeiro argumento é a base de dados usada
# para a construção do gráfico.

# O "bins" divide o gráfico em uma quantidade
# determinada de espaços. O "color" define a
# cor das barras do gráfico no caso.

plt.title('Exemplo de Histograma')
plt.xlabel('Valores')
plt.ylabel('Frequência')
# Dá nome ao gráfico, 
# ao eixo x e ao eixo y.

plt.savefig('/Users/ptrindader/Desktop/teste/histogram_example.png')
# Salva o arquivo no local determinado.