salary = float(input())
taxes = 0

if 2000 >= salary :
    print("Isento")
else :
    if salary <= 3000 :
        taxes = (salary - 2000) * 0.08     
    elif salary <= 4500 :
        taxes = (salary - 3000) * 0.18 + 80
    elif salary > 4500 :
        taxes = (salary - 4500) * 0.28 + 350
    print(f"R$ {taxes:.2f}")