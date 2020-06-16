"""2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para
que muestre la diagonal principal de la matriz.

1 2 3           1
4 5 6     ->      5
7 8 9               9

"""

numeros = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# imprime diagonal principal

for r in range(0, 3):
    for c in range(0, 3):
        if r == c:
            print(numeros[r][c], ' ', end='')
