"""7. Escriba un programa que calcule el valor de :
1+2+3+....+n"""

n = int(input('Digite número de iteraciones: '))

sumatoria = 0
for i in range(1, n+1, 1):
    sumatoria = sumatoria + i

print('El resultado de la sumatoria es: ', str(sumatoria))
