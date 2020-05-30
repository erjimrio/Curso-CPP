"""13. Hacer un programa que realice la serie de Fibonacci:
Fibonacci -> 0,1,1,2,3,5,8,13,....,n """

x = 0
y = 1
z = 1

n = int(input('Digite número de iteraciones: '))
print('0, 1', end="")
for i in range(1, n + 1, 1):
    z = x + y
    print(', {}'.format(z), end="")
    x = y
    y = z
