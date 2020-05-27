"""6. Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin usar la función pow."""

potencia = 1

x = int(input('Digite el valor de x: '))
y = int(input('Digite el valor de y: '))

for i in range(1, y+1, 1):
    potencia = potencia * x

print('{} elevado a la {} = {}'.format(x, y, potencia))
