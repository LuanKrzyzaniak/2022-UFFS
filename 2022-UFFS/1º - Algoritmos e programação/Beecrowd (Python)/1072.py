n = int(input())

inside = 0
outside = 0

while n > 0:
    number = float(input())
    if number >= 10 and number <= 20:
        inside += 1
    else:
        outside += 1
    n -= 1

print(f"{inside} in\n{outside} out")