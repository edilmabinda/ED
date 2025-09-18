# Solicitando dois números ao usuário
num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

# Realizando operações aritméticas
soma = num1 + num2
subtracao = num1 - num2
multiplicacao = num1 * num2
if num2 != 0:
    divisao = num1 / num2
else:
    divisao = "Erro: Divisão por zero!"

# Exibindo os resultados
print(f"Soma: {soma}")
print(f"Subtração: {subtracao}")
print(f"Multiplicação: {multiplicacao}")
print(f"Divisão: {divisao}")
