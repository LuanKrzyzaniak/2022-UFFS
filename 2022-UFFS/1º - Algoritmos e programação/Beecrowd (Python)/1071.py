X = int(input())
Y = int(input())            
sum = 0

if X > Y:
    Z = Y
    Y = X
    X = Z

Z = X+1

while Z < Y:
    if  Z % 2 != 0:
        sum += Z
    Z += 1

print(sum)