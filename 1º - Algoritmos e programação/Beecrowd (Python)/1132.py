A = int(input())
B = int(input())

if A > B:
    C = A
    A = B 
    B = C

AB = A
SUM = 0

while AB <= B:
    if AB % 13 != 0:
        SUM += AB
    AB += 1

print(SUM)