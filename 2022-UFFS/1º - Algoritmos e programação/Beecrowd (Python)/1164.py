n = int(input())

while n != 0:
    number = int(input())
    counter = 1
    sum = 0
    while counter != number:
        if number % counter == 0:
            sum += counter
        counter += 1
    if sum == number:
        print(f"{number} eh perfeito")
    else:
        print(f"{number} nao eh perfeito")
    n -= 1