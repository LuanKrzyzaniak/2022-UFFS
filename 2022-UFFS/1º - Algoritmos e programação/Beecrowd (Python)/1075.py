N = int(input())
test = 1

while test <= 10000:
    if test % N == 2:
        print(test)
    test += 1