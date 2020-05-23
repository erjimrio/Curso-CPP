""" 9. Realice un programa que calcule el valor que toma la siguiente
función: (sqrt(x))/((pow(y,2))-1) para unos valores dados de x e y."""

import math

x = float(input('Digite valor de x: '))
y = float(input('Digite valor de y: '))

resultado = (math.sqrt(x))/((pow(y, 2))-1)

print('Resultado = ', str(round(resultado, 2)))
