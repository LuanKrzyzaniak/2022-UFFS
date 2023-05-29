n = int(input())

while n != 0:

    assin_base = []
    assin_dia = []
    diff = 0

    for inp in range(0,n):
        assin = input()
        assin_base.append(assin)

    n = int(input())

    for inp in range(0,n):
        assin = input()
        assin_dia.append(assin)

    for a in range (0,len(assin_base)):
        for b in range(0,len(assin_dia)):

            if assin_base[a] != assin_dia[b]:
                assin1 = list(assin_base[a])
                assin2 = list(assin_dia[b])
                
                for a in range(0,len(assin1)):
                    for b in range(0,len(assin2)):

                        if assin1[a] != assin2[b]:
                            diff += 1

    if diff >= 2:
        print(diff)

    n = int(input())