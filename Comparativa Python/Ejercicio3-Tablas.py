"""3. Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego
copiar todo su contenido hacia otra matriz"""

matriz1 = [[1, 2], [3, 4]]

matriz2 = [([0]*2) for r in range(2)]

for r in range(0, 2):
    for c in range(0, 2):
        matriz2[r][c] = matriz1[r][c]

# Mostrando matriz 2

print('Mostrando matriz 2')

for r in range(0, 2):
    for c in range(0, 2):
        print(matriz2[r][c], ' ', end="")
    print(' ')
