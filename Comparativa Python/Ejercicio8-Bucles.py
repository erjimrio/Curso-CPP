# Escriba un programa que calcule el valor de: 1+3+5+..+2n-1
n = int(input('Digite valor de n: '))
sumatoria = 0

for i in range(1, (n+1)):
    sumatoria = sumatoria + (2*i-1)
    # print(sumatoria)

print('El resultado de la sumatoria es: ', sumatoria)
