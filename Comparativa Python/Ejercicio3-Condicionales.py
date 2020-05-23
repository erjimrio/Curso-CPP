"""3. Realice un programa que lea un valor entero y determine si se trata de
un número par o impar."""

num = int(input('Digite un número: '))

if (num == 0):
    print('El número es cero')
elif (num % 2) == 0:
    print('Es número par')
else:
    print('Es número impar')
