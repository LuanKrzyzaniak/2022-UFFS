import math

num = input()
nb = num.split()

for i,value in enumerate(nb) : 
    nb[i] = float(value)

delta = (nb[1] ** 2) -((4 * nb[0]) * nb[2])

if nb[0] == 0 or delta < 0:
    print("Impossivel calcular")
else : 
    root1 = (- nb[1] + math.sqrt(delta)) / (2 * nb[0])
    root2 = (- nb[1] - math.sqrt(delta)) / (2 * nb[0])
    print(f"R1 = {root1:.5f}\nR2 = {root2:.5f}")
