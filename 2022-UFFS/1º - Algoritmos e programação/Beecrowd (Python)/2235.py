tokens = input()
token = tokens.split()

A = int(token[0])
B = int(token[1])
C = int(token[2])

if A-B==0 or B-C==0 or C-A==0 or A+B==C or B+C==A or C+A==B:
    print("S")
else:
    print("N")