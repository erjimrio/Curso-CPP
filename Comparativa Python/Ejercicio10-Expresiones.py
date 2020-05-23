""" 10. Escriba un programa que calcule las soluciones de una ecuación de
segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que:
(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)"""

import math

a = int(input('Digite valor de a: '))
b = int(input('Digite valor de b: '))
c = int(input('Digite valor de c: '))

x1 = (-(b) + math.sqrt((pow(b, 2)-(4*a*c))))/(2*a)

x2 = (-(b) - math.sqrt((pow(b, 2)-(4*a*c))))/(2*a)

print('x1 = ', str(round(x1, 2)))

print('x2 = ', str(round(x2, 2)))
