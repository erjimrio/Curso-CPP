""" *9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

 5! = 5*4*3*2*1 """

n = int(input('Digite valor de n: '))

factorial = 1

for i in range(1, n + 1, 1):
    factorial *= i

print('El factorial de {} es: {}'.format(n, factorial))
