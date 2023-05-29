money = int(input())

cedules = [100,50,20,10,5,2,1]
number = [0,0,0,0,0,0,0]
total = [money,0,0,0,0,0,0,0]

def total_calc():
    for index,value in enumerate(total) :
        if index > 0 :
            total[index]= total[index-1] - (cedules[index-1] * number[index-1])

for index,value in enumerate(number) :
    number[index] = total[index] // cedules[index]
    total_calc()

print(f"{money}\n{number[0]} nota(s) de R$ 100,00\n{number[1]} nota(s) de R$ 50,00\n{number[2]} nota(s) de R$ 20,00\n{number[3]} nota(s) de R$ 10,00\n{number[4]} nota(s) de R$ 5,00\n{number[5]} nota(s) de R$ 2,00\n{number[6]} nota(s) de R$ 1,00")