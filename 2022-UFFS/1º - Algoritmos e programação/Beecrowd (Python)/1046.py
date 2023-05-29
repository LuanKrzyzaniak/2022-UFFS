start, finish = map(int, input().split())
time = 0

if start == finish :
    time = 24 
else :
    while start != finish:
        time += 1
        start += 1
        if start == 24 :
            start = start - 24

print(f"O JOGO DUROU {time} HORA(S)")