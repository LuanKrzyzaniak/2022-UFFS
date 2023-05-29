n = int(input())
f = 0
ftotal = 1

while f < n:
    ftotal *= (n-f)
    f += 1

print(ftotal)