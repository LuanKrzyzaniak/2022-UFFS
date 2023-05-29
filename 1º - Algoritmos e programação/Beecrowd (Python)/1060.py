n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())
n5 = float(input())
n6 = float(input())

list = [n1,n2,n3,n4,n5,n6]

i = 0
positives = 0

while i <= 5 :
    if list[i] > 0 :
        positives += 1
    i += 1
    
print(f"{positives} valores positivos")