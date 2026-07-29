x = int(input())

for i in range(1, 100):
    if x % i == 0:
        print(i)
    else:
        continue
    i += 1