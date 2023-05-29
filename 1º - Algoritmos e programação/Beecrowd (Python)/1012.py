data = input()

datalist = data.split()

for index, value in enumerate(datalist):
    datalist[index] = float(value)

trianglearea = (datalist[0] * datalist[2]) / 2
circlearea = (datalist[2] * datalist[2]) * 3.14159
traparea = (datalist[0] + datalist[1]) * (datalist[2] /2)
squarearea = datalist[1] * datalist[1]
recarea = datalist[0] * datalist[1]

print(f"TRIANGULO: {trianglearea:.3f}\nCIRCULO: {circlearea:.3f}\nTRAPEZIO: {traparea:.3f}\nQUADRADO: {squarearea:.3f}\nRETANGULO: {recarea:.3f}")