N = int(input())

for inputs in range (0, N):
    a,b,c = map(float,input().split())
    average = round(((a*2) + (b*3) + (c*5)) / 10,1)
    print(average)

3