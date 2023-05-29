product1 = input()
product2 = input()
productlist1 = product1.split()
productlist2 = product2.split()

product1pay = float(productlist1[1]) * float(productlist1[2])
product2pay = float(productlist2[1]) * float(productlist2[2])
totalpay = product1pay + product2pay

print(f"VALOR A PAGAR: R$ {totalpay:.2f}")