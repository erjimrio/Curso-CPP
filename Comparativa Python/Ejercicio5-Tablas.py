"""5. Realice un programa que lea una matriz 3x3 y cree su matriz transpuesta.
La matriz transpuesta es aquella en la que la columna i era la fila i de la
matriz original

|1 2 3|         |1 4 7|
|4 5 6|   ->    |2 5 8|
|7 8 9|         |3 6 9|
"""

# Definimos matriz o lista de dos dimensiones y la llenamos de 0s

matriz = [([0]*3) for r in range(3)]
matrizT = [([0]*3) for r in range(3)]

for r in range(0, 3):
    for c in range(0, 3):
        matriz[r][c] = (int(input('Digite un número [{}][{}]: '
                        .format(r+1, c+1))))

# Imprimimos matriz original

print('Matriz original: ')
for r in range(0, 3):
    for c in range(0, 3):
        print(matriz[r][c], ' ', end="")
    print(' ')

# Matriz transpuesta
print('\nLa matriz Transpuesta es: ')

for r in range(0, 3):
    for c in range(0, 3):
        matrizT[r][c] = matriz[c][r]
        print(matrizT[r][c], ' ', end='')
    print(' ')
