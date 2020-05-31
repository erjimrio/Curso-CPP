"""2. Escribe un programa que defina un vector de números y calcule la
multiplicación acumulada de sus elementos."""

numeros = [1, 2, 3, 4, 5]

multiplicacion = 1

n = len(numeros)

for i in range(n):
    multiplicacion *= numeros[i]

print('La multiplicación acumulada es: ', multiplicacion)