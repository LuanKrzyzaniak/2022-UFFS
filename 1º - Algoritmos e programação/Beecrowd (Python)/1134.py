code = 0
alcool = 0
gasolina = 0
diesel = 0

while code != 4:
    code = int(input())
    if code == 1:
        alcool += 1
    elif code == 2:
        gasolina += 1
    elif code == 3:
        diesel += 1
    
print(f"MUITO OBRIGADO\nAlcool: {alcool}\nGasolina: {gasolina}\nDiesel: {diesel}")