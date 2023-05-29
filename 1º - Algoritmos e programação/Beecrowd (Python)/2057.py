data = input()
time = data.split()

departure = int(time[0])
travel =  int(time[1])
zone = int(time[2])

arrival = departure + travel + zone

if arrival >= 24:
    arrival = arrival - 24
elif arrival < 0:
    arrival = arrival + 24

print(arrival)