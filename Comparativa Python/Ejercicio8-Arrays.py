"""8. Hacer un programa que lea 5 números en un arreglo, los copie a otro
arreglo multiplicados por 2 y muestre el segundo arreglo."""

miLista1 = []
miLista2 = []

n = int(input('Digite número de elementos que tendrá el array: '))

for i in range(n):
    miLista1.append(float(input('{} . Digite un número: '.format(i+1))))

for i in range(len(miLista1)):
    miLista2.append(miLista1[i]*2)

print('El nuevo array es: \n', miLista2)
