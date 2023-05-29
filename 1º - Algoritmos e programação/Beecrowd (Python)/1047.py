hstart, mstart, hfinish, mfinish = map(int, input().split())
hduration = 0
mduration = 0

while mstart != mfinish :
    mduration += 1
    mstart += 1
    if mstart == 60 :
        mstart -= 60
        hduration -= 1

if hstart == hfinish :
    hduration += 24
else :
    while hstart != hfinish :
        hduration += 1
        hstart += 1
        if hstart == 24 :
            hstart -= 24

if hduration == 24 and mduration != 0 :
    hduration -= 24

print(f"O JOGO DUROU {hduration} HORA(S) E {mduration} MINUTO(S)")