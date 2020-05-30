"""
16. Realice un programa que calcule la descomposición en factores primos de
un número entero.

Por ejemplo: 20 = 2 * 2 * 5
"""
n = int(input('Digite un número: '))

for i in range(2, n, 1):
    while n % i == 0:
        print(i, ' ', end="")
        n = n / i
