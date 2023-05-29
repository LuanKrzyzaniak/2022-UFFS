n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())
n5 = float(input())
n6 = float(input())
num = [n1,n2,n3,n4,n5,n6]

positives = 0
sum = 0

for i,value in enumerate(num):
    if num[i] > 0:
        positives += 1
        sum += num[i]

average = sum / positives

print(f"{positives} valores positivos\n{average:.1f}")