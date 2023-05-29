A = round(float(input()),1)
B = round(float(input()),1)
C = round(float(input()),1)

if A > 10 :
    A = 10
if B > 10 :
    B = 10
if C > 10 :
    C = 10
    
MEDIA = ((A*2) + (B*3) + (C*5)) / 10

print(f"MEDIA = {MEDIA:.1f}")