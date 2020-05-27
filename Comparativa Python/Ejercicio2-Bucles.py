"""2. Realice un programa que lea de la entrada estándar números hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en la
salida estándar el número de valores mayores que cero leídos."""

contador = 0

num = int(input('Digite un número: '))

while num != 0:
    if num > 0:
        contador += 1
    num = int(input('Digite un número: '))

print('Se digitaron {} números mayores que cero'.format(contador))
