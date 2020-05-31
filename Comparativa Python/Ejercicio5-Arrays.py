"""5. Desarrolle un programa que lea de la entrada estándar un vector de
enteros y determine el mayor elemento del vector."""

miLista = []

n = int(input('Digite el número de elementos que tendrá el arreglo: '))
mayor = 0
for i in range(n):
    miLista.append(int(input('{}. Digite un número: '.format(i+1))))

    if mayor < miLista[i]:
        mayor = miLista[i]

print('\nEl elemento más grande en el array es: ', mayor)
