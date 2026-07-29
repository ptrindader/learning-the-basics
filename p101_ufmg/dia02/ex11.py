salario = float(input())

if salario < 0:
    print('Salário inválido.')
elif salario >= 400:
    percent = 15
elif salario >= 800:
    percent = 12
elif salario >= 1200:
    percent = 10
elif salario >= 2000:
    percent = 7
else:
    percent = 4


novoSalario = ((percent/100) + 1) * salario
reajuste = ((percent/100)) * salario

# elif 0 <= salario <= 400:
    # novoSalario = salario * 1.15
    # reajuste = salario * 0.15
    # reajustePercent = 15
# elif 400.01 <= salario <= 800:
    # novoSalario = salario * 1.12
    # reajuste = salario * 0.12
    # reajustePercent = 12
# elif 800.01 <= salario <= 1200:
    # novoSalario = salario * 1.10
    # reajuste = salario * 0.10
    # reajustePercent = 10
# elif 1200.01 <= salario <= 2000:
    # novoSalario = salario * 1.07
    # reajuste = salario * 0.07
    # reajustePercent = 7
# elif 2000 <= salario:
    # novoSalario = salario * 1.04
    # reajuste = salario * 0.04
    # reajustePercent = 4

print(f'Novo Salário:    R$ {novoSalario:.2f}')
print(f'Reajuste Ganho:  R$ {reajuste:.2f}')
print(f'Em Percentual:   {percent:.2f}%')