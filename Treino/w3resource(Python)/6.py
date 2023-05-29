'''6. Write a Python program which accepts a sequence of comma-separated numbers from user and generate a list and a tuple with those numbers. Go to the editor
Sample data : 3, 5, 7, 23
Output :
List : ['3', ' 5', ' 7', ' 23']
Tuple : ('3', ' 5', ' 7', ' 23')'''

a = input("Sample Data: ").split(", ")

print(f"Lista: {a}")

tup = '('
for n in range(len(a)):
    if n == len(a)-1:
        tup += f"'{a[n]}'"
    else:
        tup += f"'{a[n]}', "
    n -= 1
tup += ')'

print(f"Tupla: {tup}")

tuple = tuple(a)

print(f"Tuple: {tuple}")