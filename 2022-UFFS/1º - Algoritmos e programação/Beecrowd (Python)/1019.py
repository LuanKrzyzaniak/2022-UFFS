sex = int(input())

time = [3600,60,1]
hms = [0,0,0]
rest = [sex,0,0]

def time_calc():
    for i,value in enumerate(rest) :
        if i > 0 :
            rest[i] = rest[i-1] - (time[i-1] * hms[i-1])

for i,value in enumerate(hms) :
     hms[i] = rest[i] // time[i]
     time_calc()

print(f"{hms[0]}:{hms[1]}:{hms[2]}")