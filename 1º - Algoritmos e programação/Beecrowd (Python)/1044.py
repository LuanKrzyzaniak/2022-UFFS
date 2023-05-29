n = input()
nl = n.split()

for i,value in enumerate(nl):
    nl[i] = int(value)

if nl[1] % nl[0] == 0 or nl[0] % nl[1] == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")  