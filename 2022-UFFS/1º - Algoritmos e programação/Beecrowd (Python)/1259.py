n_inputs = int(input())
odd = []
even = []

for inp in range(0,n_inputs):
    number = int(input())
    if number % 2 == 0:
        even.append(number)
    else:
        odd.append(number)

even.sort()
odd.sort(reverse=True)

for i in range (0,len(even)):
    print(even[i])

for i in range (0,len(odd)):
    print(odd[i])