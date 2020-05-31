# 1. Escribe un programa que defina un vector de números y calcule la suma de
# sus elementos

numeros = [1, 2, 3, 4, 5]

sumatoria = 0
n = len(numeros)

for i in range(n):

    sumatoria += numeros[i]

print('La sumatoria es: ', sumatoria)
