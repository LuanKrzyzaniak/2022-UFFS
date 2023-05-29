testes = int(input())
coelhos = 0
ratos = 0
sapos = 0

for teste in range (0, testes):
    cobaias,especie = input().split()
    cobaias = int(cobaias)
    if especie == 'C':
        coelhos += cobaias
    elif especie == 'R':
        ratos += cobaias
    elif especie == 'S':
        sapos += cobaias

total = coelhos + ratos + sapos

print(f'Total: {total} cobaias\nTotal de coelhos: {coelhos}\nTotal de ratos: {ratos}\nTotal de sapos: {sapos}')
print(f'Percentual de coelhos: {coelhos/total*100:.2f} %\nPercentual de ratos: {ratos/total*100:.2f} %\nPercentual de sapos: {sapos/total*100:.2f} %')