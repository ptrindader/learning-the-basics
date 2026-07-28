N = int(input())

cem     =   (N // 100)
cemR    =   (N % 100)

cinq    =   (cemR // 50)
cinqR   =   (cemR % 50)

vinte   =   (cinqR // 20)
vinteR  =   (cinqR % 20)

dez     =   (vinteR) // 10
dezR    =   (vinteR) % 10

cinc    =   (dezR) // 5
cincR   =   (dezR) % 5

dois    =   (cincR) // 2
doisR   =   (cincR) % 2

um      =   (doisR)

print(f"{N}\n" \
      f"{cem} nota(s) de R$ 100,00\n" \
      f"{cinq} nota(s) de R$ 50,00\n" \
      f"{vinte} nota(s) de R$ 20,00\n" \
      f"{dez} nota(s) de R$ 10,00\n" \
      f"{cinc} nota(s) de R$ 5,00\n" \
      f"{dois} nota(s) de R$ 2,00\n" \
      f"{um} nota(s) de R$ 1,00\n")
