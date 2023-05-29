sex = int(input())

time = [365,30,1]
hms = [0,0,0]
rest = [sex,0,0]

def time_calc():
    for i,value in enumerate(rest) :
        if i > 0 :
            rest[i] = rest[i-1] - (time[i-1] * hms[i-1])

for i,value in enumerate(hms) :
     hms[i] = rest[i] // time[i]
     time_calc()

print(f"{hms[0]} ano(s)\n{hms[1]} mes(es)\n{hms[2]} dia(s)")