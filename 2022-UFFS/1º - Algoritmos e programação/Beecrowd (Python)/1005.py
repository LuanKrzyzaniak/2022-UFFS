A = round(float(input()),1)
B = round(float(input()),1)

final_grades = ((A*3.5) + (B*7.5)) / 11

if final_grades > 10 :
    final_grades = 10
    
print(f"MEDIA = {final_grades:.5f}")