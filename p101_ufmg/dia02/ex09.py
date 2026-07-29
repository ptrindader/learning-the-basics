a = int(input())
b = int(input())
c = int(input())
d = int(input())

if b > c \
    and d > a \
    and c + d > a + b \
    and ((c and d) > 0) \
    and a % 2 == 0:
        print('Valores Aceitos!')
else:
        print('Valores não aceitos.')