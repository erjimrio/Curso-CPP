"""8. Escriba un programa que lea de la entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la salida estándar su hipotenusa."""

import math

a = float(input('Digite valor de cateto a: '))
b = float(input('Digite valor de cateto b: '))

hipotenusa = math.sqrt(pow(a, 2)+pow(b, 2))

print('Hipotenusa = ', str(round(hipotenusa, 2)))
