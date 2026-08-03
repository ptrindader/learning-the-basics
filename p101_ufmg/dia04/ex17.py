from datetime import date as dt
nasc = input("Data de Nascimento (DD/MM/AAAA): ")

nasc_parse = dt.strptime(nasc, "%d/%m/%Y")
'''O strPtime (com o P no meio) serve para ANALISAR
datas. Ou seja, ele pega um input em um determinado
formato que o computador não compreende e o
transforma num objeto do tipo datetime.'''

diff = (dt.today() - nasc_parse).days
'''A ".today()" tem como valor a data de hoje e a ".days" pega
um objeto do tipo datetime e retorna somente a parte dos dias.'''


nasc_format = dt.strftime(nasc_parse, "%d/%m/%Y")
'''O strFtime (com o F no meio) serve para FORMATAR
datas. Ou seja, ele pega um objeto do tipo datetime e
transforma numa string com uma formatação específica.

Importante mencionar que o "strFtime" só lê como seu argumento
o tipo datetime.'''

lista_dias_semana = [
    "Segunda-feira",
    "Terça-feira",
    "Quarta-feira",
    "Quinta-feira",
    "Sexta-feira",
    "Sábado",
    "Domingo",
]

dia_semana = lista_dias_semana[nasc_parse.weekday()]

# dias_dict = {
#     "Monday": "Segunda",
#     "Tuesday": "Terça",
#     "Wednesday": "Quarta",
#     "Thursday": "Quinta",
#     "Friday": "Sexta",
#     "Saturday": "Sábado",
#     "Sunday": "Domingo"
# }

# dia_semana_ingles = nasc_parse.strftime("%A")
# '''Pega a data analisada (e ainda não formatada)
# e pega o nome do seu dia na semana EM INGLÊS.'''

# dia_semana = dias_dict[dia_semana_ingles]

print(dia_semana)
print(nasc_format)
print(diff)