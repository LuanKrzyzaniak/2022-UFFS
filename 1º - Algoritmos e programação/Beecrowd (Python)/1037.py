'''You must make a program that read a float-point number and print a message saying in which of following intervals 
the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the 
program must print the message “Fora de intervalo” that means "Out of Interval".'''

n = float(input())

if  n < 0 or n > 100 :
     print("Fora de intervalo")
if  0 <= n <= 25 :
    print("Intervalo [0,25]")
if  25 < n <= 50 :
    print("Intervalo (25,50]")
if  50 < n <= 75 :
    print("Intervalo (50,75]")
if  75 < n <= 100 :
    print("Intervalo (75,100]")