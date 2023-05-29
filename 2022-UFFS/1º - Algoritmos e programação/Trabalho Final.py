# Vamos importar um pacote para data e outro para tabelas:
from datetime import datetime
from tabulate import tabulate

# Vamos criar os nossos 'bancos de dados':
clientes = []
produtos = []
histórico = []


nextcode = 11

# Vamos criar as classes:
class Cliente:
    nome = None
    cpf = None

class Produto:
    código = None
    nome = None    
    tipo = None
    preço = None
    disponibilidade = None

class Compra:
    cliente = None
    data = None
    valor = None

# Vamos definir as funções secundárias:

#---Procurar cliente:
def encontrar_cliente(valor):
    for a in range(len(clientes)):
        if clientes[a].cpf == valor:
            return True
    return False

#---Procurar código de produto:
def encontrar_produto():
    while True:
        try:
            codigo = int(input('\nPor favor, informe o código do produto: '))
            for a in range(len(produtos)):
                if a == codigo:
                    return a
            print('Código inexistente. Tente novamente.')
        except ValueError:
            print('Somente números. Tente novamente.')

#---Procurar código através do nome
def procurar_code(nome):
    for a in range(len(produtos)):
        if produtos[a].nome == nome:
            return a

#---Verificar integral:
def verificar_int(valor):
    while True:
        try:
            valor = int(valor)
            return True
        except:
            return False

#---Limitar caracteres de string:
def limitar_valor(n,dado,valor):
    while len(valor) != n:
        print(f'Deve conter {n} caracteres.')
        valor = input(dado)
    return valor

# Vamos definir as funções principais:

#---cadastro de cliente:
def cadastro_cliente():

    print('\nVocê escolheu cadastrar um cliente!\n\nPor favor, informe os dados do cliente:')

    cliente = Cliente()
                #NOME
    cliente.nome = input('Nome: ')
                #CPF
    while True:
        cliente.cpf = limitar_valor(11,'CPF: ',(input('CPF: ')))
        for a in range(len(clientes)):
            if clientes[a].cpf == cliente.cpf:
                print('Este CPF já foi registrado.')
                return
        checar = verificar_int(cliente.cpf)
        if checar == True:
            break
        print('Deve conter somente números.')
    print('\nCliente registrado! Confira as informações: ')
    dados = [[cliente.nome, cliente.cpf]]
    cabeçalho = ['NOME','CPF']
    print(tabulate(dados, headers=cabeçalho, tablefmt='fancy_grid'))
    clientes.append(cliente)
    return cliente.cpf

#---cadastro de produto:
def cadastro_produto():

    print('\nVocê escolheu cadastrar um produto!\n\nPor favor, informe os dados do produto:')

    produto = Produto()

            # NOME:
    while True:
        produto.nome = input('Nome:')
        for a in range(len(produtos)):
            if produtos[a].nome == produto.nome:
                print('\nUm produto com esse nome já foi registrado.')
                return
        break

            # TIPO:
    while True:
            produto.tipo = input('Tipo: ("1" para série, "2" para filme e "3" para documentário):')
            if produto.tipo == '1':
                produto.tipo = 'Série'
                break
            elif produto.tipo == '2':
                produto.tipo = 'Filme'
                break
            elif produto.tipo == '3':
                produto.tipo = 'Documentário'
                break
            else:
                print('Escolha inválida. Tente novamente.')

            # PREÇO:
    while True:
        try:
            produto.preço = float(input('Preço em reais (utilizar ponto para centavos):'))
            break
        except ValueError:
            print("Formato inválido. Tente novamente.")

            # DISPONIBILIDADE:
    while True:
        produto.disponibilidade = input('Disponibilidade ("1" para disponível, "2" para indisponível):')
        if produto.disponibilidade == '1':
            produto.disponibilidade = 'Disponível'
            break
        elif produto.disponibilidade == '2':
            produto.disponibilidade = 'Indisponível'
            break
        else:
            print('Escolha inválida. Tente novamente.')


    produtos.append(produto)

            # CÓDIGO
    n = procurar_code(produto.nome)
    produtos[n].código = n

    print("\nProduto cadastrado! Confira as informacões:")
    dados = [[produto.código,produto.nome,produto.tipo,produto.preço,produto.disponibilidade]]
    cabeçalho = ['CÓDIGO','NOME','TIPO','PREÇO','DISPONIBILIDADE']
    print(tabulate(dados, headers=cabeçalho, tablefmt = 'fancy_grid'))

#---Para consultar produtos:
def consultar_produto():
    global encontrado
    print('\nVocê escolheu consultar um produto!')
    a = encontrar_produto()
    print('\nProduto encontrado! Confira as informações:')
    dados = [[produtos[a].código,produtos[a].nome, produtos[a].tipo, produtos[a].preço,  produtos[a].disponibilidade]]
    cabeçalho = ['CÓDIGO','NOME','TIPO','PREÇO','DISPONIBILIDADE']
    print(tabulate(dados, headers=cabeçalho, tablefmt='fancy_grid'))

#---Para atualizar produtos:
def atualizar_produto():
    print('\nVocê escolheu atualizar um produto!')
    a = encontrar_produto()
    dados = [[produtos[a].código,produtos[a].nome, produtos[a].tipo, produtos[a].preço,  produtos[a].disponibilidade]]
    cabeçalho = ['CÓDIGO','NOME','TIPO','PREÇO','DISPONIBILIDADE']
    print(tabulate(dados, headers=cabeçalho, tablefmt='fancy_grid'))   
    while True:
        op = input("\nDigite:\n '0' para cancelar operação\n '1' para atualizar o nome\n '2' para atualizar o tipo\n '3' para atualizar o preço\n '4' para atualizar a disponibilidade: ")
      
        if op == '0':
            break

        if op == '1':
            print('\nVocê escolheu atualizar o nome!')
            while True:
                new = input('Informe o novo nome: ')
                for b in range(len(produtos)):
                    if produtos[b].nome == new:
                        print('\nUm produto com esse nome já foi registrado.')
                        return
                break
            produtos[a].nome = new
            print(f'\nNome do produto {a} atualizado para {new}.')
            break

        if op == '2':  
            print('\nVocê escolheu atualizar o tipo!')
            while True:
                new = input('Tipo: ("1" para série, "2" para filme e "3" para documentário): ')
                if new == '1':
                    new = 'Série'
                    break
                elif new == '2':
                    new = 'Filme'
                    break
                elif new == '3':
                    new = 'Documentário'
                    break
                else: 
                    print('Escolha inválida. Tente novamente.')
            produtos[a].tipo = new
            print(f'\nTipo do produto {a} atualizado para {new}.')
            break

        if op == '3':
            print('\nVocê escolheu atualizar o preço!')
            while True:
                try:
                    new = float(input('Preço em reais (utilizar ponto para centavos):'))
                    break
                except ValueError:
                    print("Formato inválido. Tente novamente.")
            produtos[a].preço = new
            print(f'\nPreço do produto {a} atualizado para {new}.')
            break

        if op == '4':
            print('\nVocê escolheu atualizar a disponibilidade!')
            while True:
                new = input('Disponibilidade ("1" para disponível, "2" para indisponível):')
                if new == '1':
                    new = 'Disponível'
                    break
                elif new == '2':
                    new = 'Indisponível'
                    break
                else:
                    print('Escolha inválida. Tente novamente.')
            produtos[a].disponibilidade = new
            print(f'\nDisponibilidade do produto {a} atualizado para {new}.')
            break
        
#---Para relatório de produtos:
def relatório_produtos():
    global produtosordenados
    print('\nVocê escolheu relatório de produtos!')
    produtosordenados = sorted(produtos, key=lambda x: x.nome)
    tabela_cabeça = ['CÓDIGO', 'NOME','TIPO','PREÇO','DISPONIBILIDADE']
    while True:
        ope = input("\nDigite:\n '0' para cancelar operação\n '1' para somente séries\n '2' para somente filmes\n '3' para somente documentários\n '4' para somente disponíveis\n '5' para somente indisponíveis\n")
        dados = []
        if ope == '0':
            break
        elif ope == '1':
            print('\nVocê escolheu somente séries.')
            for a in range(len(produtosordenados)):
                if produtosordenados[a].tipo == 'Série':
                    dados.append([produtosordenados[a].código, produtosordenados[a].nome, produtosordenados[a].tipo, produtosordenados[a].preço, produtosordenados[a].disponibilidade])
            print(tabulate(dados, headers=tabela_cabeça, tablefmt="fancy_grid"))
        elif ope == '2':
            print('\nVocê escolheu somente filmes.')
            for a in range(len(produtosordenados)):
                if produtosordenados[a].tipo == 'Filme':
                    dados.append([produtosordenados[a].código, produtosordenados[a].nome, produtosordenados[a].tipo, produtosordenados[a].preço, produtosordenados[a].disponibilidade])
            print(tabulate(dados, headers=tabela_cabeça, tablefmt="fancy_grid"))
        elif ope == '3':/
            print('\nVocê escolheu somente documentários.')
            for a in range(len(produtosordenados)):
                if produtosordenados[a].tipo == 'Documentário':
                    dados.append([produtosordenados[a].código, produtosordenados[a].nome, produtosordenados[a].tipo, produtosordenados[a].preço, produtosordenados[a].disponibilidade])
            print(tabulate(dados, headers=tabela_cabeça, tablefmt="fancy_grid"))
        elif ope == '4':
            print('\nVocê escolheu somente disponíveis.')
            for a in range(len(produtosordenados)):
                if produtosordenados[a].disponibilidade == 'Disponível':
                    dados.append([produtosordenados[a].código, produtosordenados[a].nome, produtosordenados[a].tipo, produtosordenados[a].preço, produtosordenados[a].disponibilidade])
            print(tabulate(dados, headers=tabela_cabeça, tablefmt="fancy_grid"))
        elif ope == '5':
            print('\nVocê escolheu somente indisponíveis.')
            for a in range(len(produtosordenados)):
                if produtosordenados[a].disponibilidade == 'Indisponível':
                    dados.append([produtosordenados[a].código, produtosordenados[a].nome, produtosordenados[a].tipo, produtosordenados[a].preço, produtosordenados[a].disponibilidade])
            print(tabulate(dados, headers=tabela_cabeça, tablefmt="fancy_grid"))        
        else:
            print('Escolha inválida. Tente novamente.')
    
    
#---Para registrar compras:
def registrar_compra(): 

    print('\nVocê escolheu registrar uma compra!')

    id = input('\nPor favor, informe o CPF do cliente: ')
    while True:
        escolha = input(f"\nCPF: {id}. Confirma?\n '0' para cancelar\n '1' para confirmar\n")
        if escolha == '0':
            print('\nVocê cancelou a compra.')
            return
        elif escolha == '1':
            print('\nVocê confirmou o CPF.')
            break
        else:
            print('Escolha inválida. Tente novamente.')
        
    existe = encontrar_cliente(id)
    if existe == False:
        while True:
            oper = input("\nO CPF informado não está cadastrado. Deseja cadastrar novo cliente?\n '0' para cancelar a compra\n '1' para cadastrar\n")
            if oper == '0':
                print('\nVocê cancelou a compra.')
                return
            if oper =='1':
                id = cadastro_cliente()
                print(f'\nVocê cadastrou o CPF {id}.')
                break
            else:
                print('Escolha inválida. Tente novamente.')

    while True:
        adquiridos = []
        compra = Compra()
        compra.cliente = id
        compra.data = datetime.today().strftime('%d/%m/%Y %H:%M')
        soma = 0
        while True:
            choice = input("\nDigite: '0' para encerrar a compra ou '1' para adicionar novo produto.\n")
            if choice == '0':
                break
            elif choice == '1':
                aq = encontrar_produto()
                if produtos[aq].disponibilidade == 'Indisponível':
                    print('Produto indisponível.')
                    continue
                print(f'\nProduto informado:\nCódigo: {aq}\nNome: {produtos[aq].nome}\nTipo: {produtos[aq].tipo}\nPreço: {produtos[aq].preço}\nDisponibilidade: {produtos[aq].disponibilidade}')
                while True:
                    confirma = input("\nConfirmar produto?\n '0' para cancelar\n '1' para confirmar\n")
                    if confirma == '0':
                        print('Produto cancelado.')
                        break
                    elif confirma == '1':
                        soma += produtos[aq].preço
                        adquiridos.append(aq)
                        print(f"\nProduto '{produtos[aq].nome}' adquirido com sucesso.")
                        break
                    else:
                        print('\nEscolha inválida. Tente novamente.')
            else:
                print('Escolha inválida. Tente novamente.')
        if soma <= 0:
            print('Nenhum item foi adquirido.')
            break
        compra.valor = round(soma,2)
        histórico.append(compra)
        print('\nCompra finalizada!\n')
        print('CÓDIGO   NOME    TIPO    PREÇO')
        for a in adquiridos:
            print(f'{produtos[a].código}   {produtos[a].nome}   {produtos[a].tipo}   {produtos[a].preço}   {produtos[a].disponibilidade}')
        print(f'Preço total: {soma:.2f}')
        break

#---Para relatório de compras:
def relatório_compras():
        print('\nVocê escolheu relatório de compras!')
        while True:
            dados = []
            cabeçalho = ['DATA', 'CLIENTE', 'VALOR']
            op = input("\nDigite:\n '0' para cancelar a operação\n '1' para relatório completo\n '2' para relatório de cliente\n")
            if op == '0':
                print('Você cancelou a operação.')
                break
            elif op == '1':
                for a in range(len(histórico)):
                    #VERSÃO DE RELATÓRIO COM NOME DO CLIENTE NO LUGAR DO CPF
                    #for b in range(len(clientes)):
                    #    if clientes[b].cpf == histórico[a].cliente:
                    #        nome_cpf = clientes[b].nome
                    #   dados.append([histórico[a].data, nome_cpf, histórico[a].valor])
                    dados.append([histórico[a].data, histórico[a].cliente, histórico[a].valor])
                print(tabulate(dados, headers=cabeçalho, tablefmt="fancy_grid"))
            elif op == '2':
                id = input('\nPor favor, informe o CPF do cliente: ')
                while True:
                    escolha = input(f"\nCPF: {id}. Confirma?\n '0' para cancelar\n '1' para confirmar\n")
                    if escolha == '0':
                        print('\nVocê cancelou a busca.')
                        break
                    elif escolha == '1':
                        print('\nVocê confirmou o CPF.')
                        break
                    else:
                        print('Escolha inválida. Tente novamente.')
                if escolha == '0':
                    continue
                existe = encontrar_cliente(id)
                if existe == False:
                    print("\nO CPF informado não está cadastrado.")
                    continue
                print('DATA             CLIENTE     PREÇO')
                for a in range(len(histórico)):
                    #VERSÃO DE RELATÓRIO COM NOME DO CLIENTE NO LUGAR DO CPF
                    #for b in range(len(clientes)):
                    #    if clientes[b].cpf == histórico[a].cliente:
                    #        nome_cpf = clientes[b].nome
                    #if histórico[a].cliente == id:
                    #   dados.append([histórico[a].data, nome_cpf, histórico[a].valor])
                    if histórico[a].cliente == id:
                        dados.append([histórico[a].data, histórico[a].cliente, histórico[a].valor])
                print(tabulate(dados, headers=cabeçalho, tablefmt='fancy_grid'))

            else:
                print('Escolha inválida. Tente novamente.')

# Vamos cadastrar alguns clientes, produtos e compras para teste:
#---CLIENTES
cliente1 = Cliente()

cliente1.nome = 'Marcela'
cliente1.cpf = '11997295903'

clientes.append(cliente1)

cliente2 = Cliente()

cliente2.nome = 'Luan'
cliente2.cpf = '03987849061'

clientes.append(cliente2)

#---PRODUTOS
produto1 = Produto()

produto1.código = 0
produto1.nome = "Orgulho e preconceito"
produto1.tipo = 'Filme'
produto1.preço = 14.99
produto1.disponibilidade = 'Disponível'

produtos.append(produto1)  

produto2 = Produto()

produto2.código = 1
produto2.nome = "Em ritmo de fuga"
produto2.tipo = 'Filme'
produto2.preço = 13.99
produto2.disponibilidade = 'Disponível'

produtos.append(produto2)

produto3 = Produto()

produto3.código = 2
produto3.nome = "Minions"
produto3.tipo = 'Filme'
produto3.preço = 14.99
produto3.disponibilidade = 'Disponível'

produtos.append(produto3)

produto4 = Produto()

produto4.código = 3
produto4.nome = "Professor Polvo"
produto4.tipo = 'Documentário'
produto4.preço = 13.99
produto4.disponibilidade = 'Disponível'

produtos.append(produto4)

produto5 = Produto()

produto5.código = 4
produto5.nome = "Mandela"
produto5.tipo = 'Filme'
produto5.preço = 13.99
produto5.disponibilidade = 'Indisponível'

produtos.append(produto5)

produto6 = Produto()

produto6.código = 5
produto6.nome = "Profissional"
produto6.tipo = 'Série'
produto6.preço = 16.99
produto6.disponibilidade = 'Disponível'

produtos.append(produto6)

produto7 = Produto()

produto7.código = 6
produto7.nome = "The Boys"
produto7.tipo = 'Série'
produto7.preço = 16.99
produto7.disponibilidade = 'Disponível'

produtos.append(produto7)

produto8 = Produto()

produto8.código = 7
produto8.nome = "Peaky Blinders"
produto8.tipo = 'Série'
produto8.preço = 16.99
produto8.disponibilidade = 'Indisponível'

produtos.append(produto8)

produto9 = Produto()

produto9.código = 8
produto9.nome = "Titans"
produto9.tipo = 'Série'
produto9.preço = 16.99
produto9.disponibilidade = 'Indisponível'

produtos.append(produto9)

produto10 = Produto()

produto10.código = 9
produto10.nome = "O Dilema das Redes"
produto10.tipo = 'Documentário'
produto10.preço = 15.99
produto10.disponibilidade = 'Disponível'

produtos.append(produto10)

#---COMPRAS
compra1 = Compra()
compra1.cliente = '11997295903'
compra1.data = '07/08/2022 20:46'
compra1.valor = 103.89

histórico.append(compra1)

compra2 = Compra()
compra2.cliente = '11997295903'
compra2.data = '09/08/2022 14:32'
compra2.valor = 53.99

histórico.append(compra2)

compra3 = Compra()
compra3.cliente = '03987849061'
compra3.data = '09/08/2022 14:55'
compra3.valor = 32.97

histórico.append(compra3)

compra4 = Compra()
compra4.cliente = '03987849061'
compra4.data = '10/08/2022 09:30'
compra4.valor = 53.99

histórico.append(compra4)

# Agora, vamos pedir, através de um input numérico, qual a operação desejada:

print("Bem vindo à interface Nerdflix!\n\nDigite:\n '0' para encerrar a sessão\n '1' para cadastrar usuário\n '2' para cadastrar produto\n '3' para consultar produto\n '4' para atualizar produto\n '5' para relatório de produtos\n '6' para registrar compra\n '7' para relatório de compras")

operação = input()

while operação != '0':
    if operação == '1':
        cadastro_cliente()
    elif operação == '2':
        cadastro_produto()
    elif operação == '3':
        consultar_produto()
    elif operação == '4':
        atualizar_produto()
    elif operação == '5':
        relatório_produtos()
    elif operação == '6':
        registrar_compra()
    elif operação == '7':
        relatório_compras()
    else:
        print('Escolha inválida. Tente novamente!')

    print("\nEscolha nova operação.\nDigite:\n '0' para encerrar a sessão\n '1' para cadastrar usuário\n '2' para cadastrar produto\n '3' para consultar produto\n '4' para atualizar produto\n '5' para relatório de produtos\n '6' para registrar compra\n '7' para relatório de compras")
    operação = input()

print('\nObrigado por utilizar a Nerdflix!')    

#Corrigir CPF no pedido do histórico (somente números e somente 11 letras)