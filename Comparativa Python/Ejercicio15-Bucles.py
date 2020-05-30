"""15. Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un número aleatorio en ese mismo
rango [1-100], e indicarle al usuario si el número que digitó es menor o mayor
al número aleatorio, así hasta que lo adivine. Por último, mostrarle el número
de intentos que le llevó.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
"""
import random
contador = 0
aleatorio = random.randint(1, 100)
n = int(input('Digite un úmero: '))

while n != aleatorio:
    if n < aleatorio:
        print('Digite un número mayor')
    else:
        print('Digite un número menor')
    n = int(input('Digite un número: '))
    contador += 1

print('\n¡¡¡¡Felicidades adivinaste el número!!!!')
print('\nRequeriste {} intentos'.format(contador))
