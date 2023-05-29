data = input()
datalist = data.split()

for i,value in enumerate(datalist):
    datalist[i] = float(value)

datalist = sorted(datalist, reverse=True)

A = datalist[0]
B = datalist[1]
C = datalist[2]
 
if A >= B + C:
    print("NAO FORMA TRIANGULO")
else:
    if A**2 == B**2 + C**2:
        print("TRIANGULO RETANGULO")
    if A**2 > B**2 + C**2 :
        print("TRIANGULO OBTUSANGULO")
    if A**2 < B**2 + C**2 :
        print("TRIANGULO ACUTANGULO")
    if A == B == C:
        print("TRIANGULO EQUILATERO")
    if A == B != C or A == C != B or B == C != A:
        print("TRIANGULO ISOSCELES")