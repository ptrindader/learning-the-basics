cod = int(input())
qtde = int(input())

hotdog = ['Cachorro Quente', 4.00]
xSalada = ['X-Salada', 4.50]
xBacon = ['X-Bacon', 5.00]
torrada = ['Torrada Simples', 2.00]
refri = ['Refrigerante', 1.50]

match cod:
    case 1:
         total = hotdog[1] * qtde
         print(f'{qtde} x {hotdog[0]} = R$ {total:.2f}')
    case 2:
         total = xSalada[1] * qtde
         print(f'{qtde} x {xSalada[0]} = R$ {total:.2f}')
    case 3:
         total = xBacon[1] * qtde
         print(f'{qtde} x {xBacon[0]} = R$ {total:.2f}')
    case 4:
         total = torrada[1] * qtde
         print(f'{qtde} x {torrada[0]} = R$ {total:.2f}')
    case 5:
         total = refri[1] * qtde
         print(f'{qtde} x {refri[0]} = R$ {total:.2f}')
