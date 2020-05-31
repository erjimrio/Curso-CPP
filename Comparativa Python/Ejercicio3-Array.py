"""3.Escribe un programa que lea de la entrada estándar un vector de números y
muestre en la salida estándar los números del vector con sus índices asociados
"""

miLista = []

n = int(input('Digite el número de elementos que tendrá el arreglo: '))

for i in range(n):
    miLista.append(int(input('{}. Digite un número: '.format(i+1))))

print('\nEl arreglo es: ')

for i in range(len(miLista)):
    print('[{}] -> {}'.format(i, miLista[i]))
