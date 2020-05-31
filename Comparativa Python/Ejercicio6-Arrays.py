"""6. Escribe un programa que defina un vector de números y calcule si existe
algún número en el vector cuyo valor equivale a la suma del resto de números
del vector.
"""

miLista = [1, 2, 10, 4, 3]

sumatoria = 0
mayor = 0
for i in range(len(miLista)):
    sumatoria += miLista[i]

    if mayor < miLista[i]:
        mayor = miLista[i]

if mayor == sumatoria-mayor:
    print('El número {} equivale a la suma de los demás números del arreglor'
          .format(mayor))
else:
    print('No hay un numero que equivalga a la suma del resto')
