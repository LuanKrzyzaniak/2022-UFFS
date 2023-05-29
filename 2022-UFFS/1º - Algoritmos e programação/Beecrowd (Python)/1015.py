import math

p1 = input()
p2 = input()

list_1 = p1.split()
list_2 = p2.split()

for index, value in enumerate(list_1):
    list_1[index] = float(value)

for index, value in enumerate(list_2):
    list_2[index] = float(value)

distance = math.sqrt(math.pow((list_2[0] - list_1[0]),(2)) + (math.pow((list_2[1] - list_1[1]),(2))))

print(round(distance,4))