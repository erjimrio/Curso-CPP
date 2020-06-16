# Realice un programa que calcule la suma de dos matrices cuadradas de 3 x 3
import numpy as np

m1 = np.zeros((3, 3), dtype=int)
m2 = np.zeros((3, 3), dtype=int)

# Ingresar datos en matriz1

for r in range(3):
    for c in range(3):
        m1[r][c] = int(input('Digite un número M1 [{}][{}]: '
                             .format(r+1, c+1)))

# Ingresar datos en matriz2

for r in range(3):
    for c in range(3):
        m2[r][c] = int(input('Digite un número M2 [{}][{}]: '
                             .format(r+1, c+1)))

print('La matriz 1: \n', m1)
print('La matriz 2: \n', m2)
print('La suma de matricez es: \n', m1 + m2)
"""
for r in range(3):
    for c in range(3):
        print(m1[r][c], ' ', end='')
    print(' ')
"""
