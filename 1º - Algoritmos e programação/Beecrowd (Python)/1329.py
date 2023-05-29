times = int(input())

while times > 0:
    mary = 0
    john = 0
    coins = list(map(int,input().split(" ")))
    while times > 0 :
        if coins[times - 1] == 0:
            mary += 1
        else:
            john += 1
        times -= 1
    print(f"Mary won {mary} times and John won {john} times")
    times = int(input())