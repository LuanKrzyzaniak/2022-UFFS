seller_name = input()
fixed_salary = round(float(input()),2)
total_sales = round(float(input()),2)
comission = 0.15

total_earned = fixed_salary + (total_sales * comission)

print(f"TOTAL = R$ {total_earned:.2f}")