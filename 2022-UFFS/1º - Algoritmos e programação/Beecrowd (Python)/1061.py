text1, sday = input().split()
shour, sminute , ssecond = map(int, input().split(" : "))
text2, eday = input().split()
ehour, eminute, esecond = map(int, input().split(" : "))

sday = int(sday)
eday = int(eday)

stime = sday * 86400 + shour * 3600 + sminute * 60 + ssecond
etime = eday * 86400 + ehour * 3600 + eminute * 60 + esecond

ttime = abs(etime - stime)

days = ttime // 86400
hours = (ttime - days * 86400) // 3600
minutes = (ttime - days * 86400 - hours * 3600) // 60 
seconds = ttime - days * 86400 - hours * 3600 - minutes * 60

print(f"{days} dia(s)\n{hours} hora(s)\n{minutes} minuto(s)\n{seconds} segundo(s)")