'''
info = input()
info_list = info.split

cod = info_list[0]
amount = info_list[1]

code = [1,2,3,4,5]
price = [4.00,4.50,5.00,2.00,1.50]

for index,value in enumerate(code) :
    code[index] = price [index]
'''

X,Y = list(map(float,input().split()))