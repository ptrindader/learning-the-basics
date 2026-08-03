def soma_digitos(n):
    # num_desmembrado = list(map(int, str(n)))
    # soma_num_desmembrado = sum(num_desmembrado)
    # return soma_num_desmembrado

    '''O que fiz aqui em cima funciona, mas o
    exercício deu a "dica" do (n % 10) então faremos
    dessa forma. 
    
    Da forma anterior, transformamos a entrada int() em
    str() porque o Python entende int() como uma cadeia
    de caracteres indivisível e str() como divisível, que
    podemos manipular melhor, pegar por posição (índice), etc.
    
    Assim, transformamos a entrada "n" em string, percorremos
    todos os seus caracteres com o map() transformando-os em
    inteiros com a função int(). Por fim, transformamos esses
    caracteres transformados em int() pelo map() em uma lista.
    
    O sum(), finalmente, soma os elementos dessa lista de inteiros.'''
    if n == 0:
        return 0
    elif n < 10:
        return n
    else:
        return (n % 10) + soma_digitos(n // 10)


x = int(input())
resultado = soma_digitos(x)

print(resultado)