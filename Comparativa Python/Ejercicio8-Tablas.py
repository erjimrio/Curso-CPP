# Realice un programa que calcule el producto de dos matrices cuadradas de
# 3 x 3

import numpy as np

m1 = np.zeros((3, 3), dtype=int)
m2 = np.zeros((3, 3), dtype=int)

for r in range(3):
    for c in range(3):
        m1[r][c] = int(input('Digite un número M1 [{}][{}]: '
                             .format(r+1, c+1)))

# Ingresar datos en matriz2

for r in range(3):
    for c in range(3):
        m2[r][c] = int(input('Digite un número M2 [{}][{}]: '
                             .format(r+1, c+1)))

print(m1 * m2)
