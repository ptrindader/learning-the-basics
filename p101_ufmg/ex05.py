a = int(input())    

for i in range(a+1):
    if a <= 0:
        print('Número inválido')
        break
    else:
        print(i)
        i += 1
