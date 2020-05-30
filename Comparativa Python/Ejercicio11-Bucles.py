# 11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

n = int(input('Digite valor a iterar: '))

potencia = 1
sumatoria = 0

for i in range(1, n + 1, 1):

    potencia = pow(2, i)
    sumatoria += potencia
    print(sumatoria)

print('El resultado de la sumatoria es: ', sumatoria)
