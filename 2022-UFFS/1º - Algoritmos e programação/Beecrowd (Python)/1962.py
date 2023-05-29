n = int(input())

while n != 0:
    year = int(input())
    since = 2015 - year
    if since <= 0:
        print (f"{abs(since)+1} A.C")
    else:
        print(f"{since} D.C")
    n -= 1