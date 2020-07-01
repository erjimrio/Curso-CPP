"""Realice un programa que lea una cadena de caracteres de la entrada estándar
y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en
la cadena"""

contadora = 0
contadore = 0
contadori = 0
contadoro = 0
contadoru = 0

cadena = input('Digite una frase o palabra: ')
cadena = cadena.lower()

for i in range(len(cadena)-1):
    if cadena[i] == 'a':
        contadora += 1
    elif cadena[i] == 'e':
        contadore += 1
    elif cadena[i] == 'i':
        contadori *= 1
    elif cadena[i] == 'o':
        contadoro += 1
    elif cadena[i] == 'u':
        contadoru += 1

print('Ocurrencias de vocales: ')
print('a = {}'.format(contadora))
print('e = {}'.format(contadore))
print('i = {}'.format(contadori))
print('o = {}'.format(contadoro))
print('u = {}'.format(contadoru))