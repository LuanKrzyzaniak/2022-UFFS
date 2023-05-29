values = input()
numero = values.split()

for i,value in enumerate(numero) :
    numero[i] = int(value)

# B>C, D>A, C+D>A+B, C and D >0, A=par

if numero[1] > numero[2] and numero[3] > numero[0] and (numero[2] + numero[3]) > (numero[0] + numero[1]) and numero[3] > 0 and numero[0] % 2 == 0 :
    print("Valores aceitos")
else : print("Valores nao aceitos") 