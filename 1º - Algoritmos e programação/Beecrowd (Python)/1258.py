tests = int(input())

vermelho_P = []
vermelho_M = []
vermelho_G = []
branco_P = []
branco_M = []
branco_G = []

for inputs in range(tests):
    nome = input()
    escolha = input().split()
    if escolha[0] == 'vermelho':
        if escolha[1] == 'P':
            vermelho_P.append(f'{escolha[0]} {escolha[1]} {nome}')
        elif escolha[1] == 'M':
            vermelho_M.append(f'{escolha[0]} {escolha[1]} {nome}')
        elif escolha[1] == 'G':
            vermelho_G.append(f'{escolha[0]} {escolha[1]} {nome}')
    else:
        if escolha[1] == 'P':
            branco_P.append(f'{escolha[0]} {escolha[1]} {nome}')
        elif escolha[1] == 'M':
            branco_M.append(f'{escolha[0]} {escolha[1]} {nome}')
        elif escolha[1] == 'G':
            branco_G.append(f'{escolha[0]} {escolha[1]} {nome}')

for a in range(len(vermelho_P)):
    if a < len(vermelho_P)-1:
        print(vermelho_P, end=' ')
    else:
        print(vermelho_P[-1])
for a in range(len(vermelho_M)-1):
    if a < len(vermelho_M)-1:
        print(vermelho_M, end=' ')
    else:
        print(vermelho_M[-1])
for a in range(len(vermelho_G)-1):
    if a < len(vermelho_G)-1:
        print(vermelho_G, end=' ')
    else:
        print(vermelho_G[-1])
for a in range(len(branco_P)-1):
    if a < len(branco_P)-1:
        print(branco_P, end=' ')
    else:
        print(branco_P[-1])
for a in range(len(branco_M)-1):
    if a < len(branco_M)-1:
        print(branco_M, end=' ')
    else:
        print(branco_M[-1])
for a in range(len(branco_G)-1):
    if a < len(branco_G)-1:
        print(branco_G, end=' ')
    else:
        print(branco_G[-1])