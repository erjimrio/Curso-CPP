""" 10. Escriba un programa que calcule el valor de : 1!+2!+3!+...+n! (Suma de
factoriales)."""

n = int(input('Digite valor de n: '))
factorial = 1
sumatoria = 0

for i in range(1, n + 1, 1):
    factorial *= i
    sumatoria += factorial

print('El resultado de la sumatoria es: ', sumatoria)
