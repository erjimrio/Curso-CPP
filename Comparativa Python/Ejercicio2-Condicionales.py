# 2. Escriba un programa que lea tres números y determine cuál de ellos es el
# mayor.

n1 = int(input('Digite número 1: '))
n2 = int(input('Digite número 2: '))
n3 = int(input('Digite número 3: '))

if (n1 == n2 and n2 == n3):
    print('Números iguales')

elif (n1 >= n2 and n1 >= n3):
    print('El número mayor es: ', n1)

elif (n2 >= n1 and n2 >= n3):
    print('El número mayor es: ', n2)

else:
    print('El número mayor es: ', n3)
