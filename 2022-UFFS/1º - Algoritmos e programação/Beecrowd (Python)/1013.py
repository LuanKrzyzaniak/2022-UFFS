'''Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.'''
data = input()
datalist = data.split()

for index, value in enumerate(datalist):
    datalist [index] = int(value)

MAIORAB = int((datalist[0] + datalist [1] + abs(datalist[0] - datalist[1])) / 2)
MAIORrC = int((datalist[2] + MAIORAB + abs(datalist[2] - MAIORAB)) / 2)

print(MAIORrC,"eh o maior")