from tabulate import tabulate
import math

# Classe de resultados
class resultados:
    id = None
    n = None
    x = None
    p = None
    p_percent = None
    q = None
    q_percent = None
    P = None
    P_percent = None
    P_ate = None
    P_ate_percent = None
    P_pelomenos = None
    P_pelomenos_percent = None

operações = []
operações_histórico = []

#Função de int
def checkint(x,y):
    while True:
        try:
            x = int(input(y))
            return x
        except:
            print("Somente números.")

#Função de float
def checkfloat(x,y):
    while True:
        try:
            x = float(input(y))
            return x
        except:
            print("Somente números.")

#Função da fórmula
def DB(n,x,p):
    q = 1 - p
    return math.comb(n,x) * (p ** x) * (q ** (n-x))

            
# Conta --------------------------------------------------------------------------------------------------------------------------------

def formula():
    global id

    # Coletando variáveis 
    print("Informe: ")

    n = 0
    n = checkint(n, "Número de testes (n): ")

    x = 0
    x = checkint(x, "Número de sucessos (x): ")
    while x > n or x < 0:
        if x > n:
            print("O número de sucessos não pode ser maior do que o número de testes.")
        elif x < 0:
            print("O número de sucessos não pode ser negativo.")
        x = checkint(x, "Número de sucessos (x): ")

    p_percent = None
    p_percent = checkfloat(p_percent,"Chance de sucesso (%): ")
    while p_percent > 100 or p_percent < 0:
        if p > 100:
            print("A chance de sucesso não pode ser maior do que 100%.")
        elif p < 0:
            print("A chance de sucesso não pode ser negativa.")
        p_percent = checkfloat(p_percent,"Chance de sucesso (%): ")
    p = p_percent / 100

    q = 1 - p
    q_percent = 100 - p_percent

    # Calculando e printando resultado
    P = math.comb(n,x) * (p ** x) * (q ** (n-x))
    P_percent = round(P * 100, 2)

    x_counter = x
    P_ate = 0
    while x_counter >= 0:
        P_ate += math.comb(n,x_counter) * (p ** x_counter) * (q ** (n-x_counter))
        x_counter -= 1
    P_ate_percent = round(P_ate * 100,2)

    P_pelomenos = 1 - (P_ate - P) 
    P_pelomenos_percent = round(P_pelomenos * 100,2)

    id += 1

    # Armazenando operação 

    operação = resultados()
    operação.id = id
    operação.n = n
    operação.x = x
    operação.p = p
    operação.p_percent = p_percent
    operação.q = q
    operação.q_percent = q_percent
    operação.P = P
    operação.P_percent = P_percent
    operação.P_ate = P_ate
    operação.P_ate_percent = P_ate_percent
    operação.P_pelomenos = P_pelomenos
    operação.P_pelomenos_percent = P_pelomenos_percent

    operações.append([operação])
    operações_histórico.append([operação.id, operação.n, operação.x, operação.p_percent, operação.q_percent, operação.P_percent, operação.P_ate_percent, operação.P_pelomenos_percent])
    operação = [[operação.id, operação.n, operação.x, operação.p_percent, operação.q_percent, operação.P_percent, operação.P_ate_percent, operação.P_pelomenos_percent]]


    # Printando resultado
    print()
    cabeçalho = ["ID","Testes (n)", "Acertos (x)","Chance de sucesso (%)", "Chance de falha (%)", "Probabilidade (%)", "Probabilidade até x (%)", "Probabilidade de pelo menos x (%)"]
    print(tabulate(operação, headers=cabeçalho, tablefmt='fancy_grid'))

# Histórico ----------------------------------------------------------------------------------------------------------------------------
def hist():
    print()
    cabeçalho = ["ID","Testes", "Acertos","Chance de sucesso (%)", "Chance de falha (%)", "Probabilidade (%)", "Probabilidade até x (%)", "Probabilidade de pelo menos x (%)"]
    print(tabulate(operações_histórico, headers=cabeçalho, tablefmt='fancy_grid'))

# Programa principal ###################################################################################################################

id = 0
menu = 1
while menu != '0':
    menu = input("\nBem vindo!\nSistema da Fórmula de Distribuição Binomial (para variáveis discretas).\n\nDigite: \n '0' para encerrar\n '1' para calcular probabilidade\n '2' para checar histórico da sessão\n")
    if menu == '0':
        print('\nObrigado por utilizar o sistema!')
    if menu == '1':
        formula()
    if menu == '2':
        hist()