highest = 0
highestinput = 0

for inputs in range (1,101):
    valor = int(input())
    if valor > highest:
        highest = valor
        highestinput = inputs

print(f"{highest}\n{highestinput}")