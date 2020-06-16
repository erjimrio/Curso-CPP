"""1. Hacer un programa para rellenar una matriz pidiendo al usuario el número
de filas y columnas. Posteriormente, mostrar la matriz en pantalla."""

renglones = int(input('Digite el número de renglones o filas: '))
columnas = int(input('Digite el número de columnas: '))

# Definimos matriz o lista de dos dimensiones y la llenamos de 0s

matriz = [([0]*columnas) for renglones in range(renglones)]

for r in range(0, renglones):
    for c in range(0, columnas):
        matriz[r][c] = (int(input('Digite un número [{}][{}]: '
                        .format(r+1, c+1))))
# Mostrar matriz

for r in range(0, renglones):
    for c in range(0, columnas):
        print(matriz[r][c], ' ', end="")
    print(' ')
