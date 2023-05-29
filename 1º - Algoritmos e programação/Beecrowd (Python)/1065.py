n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())
n5 = float(input())
num = [n1,n2,n3,n4,n5]

even = 0
odd = 0
positive = 0
negative = 0


for i,value in enumerate(num):
    if num[i] % 2 == 0:
        even += 1
    else:
        odd += 1
    if num[i] > 0:
        positive += 1    
    if num[i] < 0:
        negative += 1

print(f"{even} valor(es) par(es)\n{odd} valor(es) impar(es)\n{positive} valor(es) positivo(s)\n{negative} valor(es) negativo(s)")