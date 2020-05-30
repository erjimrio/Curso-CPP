""" 12. Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6...n"""

n = int(input('Digite valor a iterar: '))
sumatoria = 0

for i in range(1, n+1, 1):
    if n % 2 == 0:
        sumatoria -= i
    else:
        sumatoria += i
    
    print('{} = {}'.format(i, sumatoria))

print('El resultado de la sumatoria es: ', sumatoria)
