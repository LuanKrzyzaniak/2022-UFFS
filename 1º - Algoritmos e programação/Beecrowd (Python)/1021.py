tmoney = str(round(float(input()),2))
money = tmoney.split(".")

money[0] = int(money[0])
money[1] = int(money[1])

cedules = [100,50,20,10,5,2]
number = [0,0,0,0,0,0]
total = [money[0],0,0,0,0,0,0]

def total_calc():
    for index,value in enumerate(total) :
        if index > 0 :
            total[index]= total[index-1] - (cedules[index-1] * number[index-1])

for index,value in enumerate(number) :
    number[index] = total[index] // cedules[index]
    total_calc()

cents = [100,50,25,10,5,1]
numberc = [0,0,0,0,0,0]
totalc = [money[1],0,0,0,0,0,0]

def total_calc():
    for index,value in enumerate(totalc) :
        if index > 0 :
            totalc[index]= totalc[index-1] - (cents[index-1] * numberc[index-1])

for index,value in enumerate(number) :
    numberc[index] = totalc[index] // cents[index]
    total_calc()

print(f"NOTAS:\n{number[0]} nota(s) de R$ 100.00\n{number[1]} nota(s) de R$ 50.00\n{number[2]} nota(s) de R$ 20.00\n{number[3]} nota(s) de R$ 10.00\n{number[4]} nota(s) de R$ 5.00\n{number[5]} nota(s) de R$ 2.00\nMOEDAS:\n{numberc[0]} moeda(s) de R$ 1.00\n{numberc[1]} moeda(s) de R$ 0.50\n{numberc[2]} moeda(s) de R$ 0.25\n{numberc[3]} moeda(s) de R$ 0.10\n{numberc[4]} moeda(s) de R$ 0.05\n{numberc[5]} moeda(s) de R$ 0.01")