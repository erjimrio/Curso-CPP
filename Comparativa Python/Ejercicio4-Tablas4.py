"""4. Hacer una matriz preguntándo al usuario el número de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por último
mostrarla en pantalla."""
import random

renglones = int(input('Digite el número de renglones o filas: '))
columnas = int(input('Digite el número de columnas: '))

# Definimos matriz o lista de dos dimensiones y la llenamos de 0s

matriz1 = [([0]*columnas) for renglones in range(renglones)]
matriz2 = [([0]*columnas) for renglones in range(renglones)]

# Llenamos la matriz 1 con números aleatorios

for r in range(0, renglones):
    for c in range(0, columnas):
        matriz1[r][c] = random.randint(0, 100)

# Copiamos la matriz 1 en la matriz 2

for r in range(0, renglones):
    for c in range(0, columnas):
        matriz2[r][c] = matriz1[r][c]

# Imprimiendo matriz 2

print('Imprimiendo matriz 2: ')

for r in range(0, renglones):
    for c in range(0, columnas):
        print(matriz2[r][c], ' ', end='')
    print(' ')
