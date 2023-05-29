salary = float(input())
increase = 0
percentual = 0


if 400 >= salary :
    percentual = 15
elif 800 >= salary :
    percentual = 12
elif 1200>= salary :
    percentual = 10
elif 2000 >= salary :
    percentual = 7
elif salary > 2000 :
    percentual = 4

increase = salary * (percentual / 100)
newsalary = salary + increase


print(f"Novo salario: {newsalary:.2f}\nReajuste ganho: {increase:.2f}\nEm percentual: {percentual:.0f} %")