x = int(input())
y = int(input())

nums = [x, y]
nums.sort(reverse=True)
# Cria uma lista com os dois
# inteiros e ordena eles de forma
# descresente.

if nums[0] % nums[1] == 0:
    print('Múltiplos entre si.')
else:
    print('NÃO SÃO múltiplos entre si.')