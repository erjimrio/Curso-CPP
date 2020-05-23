"""1. Escriba un programa que lea dos números y determine cuál de ellos es el
mayor. """

num1 = float(input('Digite valor de num1: '))
num2 = float(input('Digite valor de num2: '))

if num1 == num2:
    print('Los numeros son iguales')

elif num1 > num2:
    print('El número mayor es: ', str(num1))

else:
    print('El número mayor es: ', str(num2))