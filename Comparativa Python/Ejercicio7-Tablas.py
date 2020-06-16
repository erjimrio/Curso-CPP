"""Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.

|8 1 3|     |8 1 3|
|1 7 4| ->  |1 7 4|
|3 4 9|     |3 4 9|
"""
import numpy as np

renglones = int(input('Digite el número de renglones: '))
columnas = int(input('Digite el número de columnas: '))

m = np.zeros((renglones, columnas), dtype=int)
# mT = np.zeros((renglones, columnas), dtype=int)

for r in range(renglones):
    for c in range(columnas):
        m[r][c] = int(input('Digite un número [{}][{}]: '.format(r+1, c+1)))

# ¿es matriz cuadrada?

if m.shape[0] == m.shape[1]:  # Es lo mismo que comparar renglones == columnas
    mT = m.transpose()  # matriz transpuesta
    if m.all() == mT.all():
        print('Es una matriz simétrica')
    else:
        print('No es una matriz simétrica')
else:
    print('No es una matriz simétrica')
