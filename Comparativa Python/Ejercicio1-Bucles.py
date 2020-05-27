"""1. Realice un programa que solicite de la entrada estándar un entero del 1
al 10 y muestre en la salida estándar su tabla de multiplicar."""

num = int(input('Digite un número [1-10]: '))

for i in range(21):
    print("{} * {} = {}".format(num, i, i*num))
