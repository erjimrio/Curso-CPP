"""8. Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto número e indicar si el número coincide con alguno de los
introducidos con anterioridad."""

num1 = int(input('Digite num1: '))
num2 = int(input('Digite num2: '))
num3 = int(input('Digite num3: '))
num4 = int(input('Digite num4: '))

if num4 == num1 or num4 == num2 or num4 == num3:
    print('El cuarto número Coincide con uno de los anteriores')
else:
    print('El cuarto número No coincide con ninguno de los anteriores')
