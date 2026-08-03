def eh_palindromo_fatia(palavra):
    palavra = (palavra.upper()).replace(" ", "")
    if palavra == palavra[::-1]:
        return True
    else:
        return False
    

def eh_palindromo_rec(palavra):

    # Pega a primeira e a última letra
    # compara os dois
    # se for verdadeiro, vai pra próxima
    # se nao, retorna que nao é.

    if len(palavra) <= 1:
        return True
    else:
        if palavra[0] != palavra [-1]:
            return False
        else:
            return eh_palindromo_rec(palavra[1:-1])

frase = input()
frase_maiusc = frase.upper()
frase = (frase_maiusc).replace(" ", "")

resultado_fatia = eh_palindromo_fatia(frase)
print(f"Fatia: {resultado_fatia}")

resultado_rec = eh_palindromo_rec(frase)
print(f"Recursivo: {resultado_rec}")
