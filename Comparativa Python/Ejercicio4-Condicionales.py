# 4. Comprobar si un número digitado por el usuario es positivo o negativo

numero = int(input('Digite un número: '))

if numero == 0:
    print('El número digitado es cero')
elif numero > 0:
    print('El número digitado es positivo')
else:
    print('El número digitado es negativo')
