"""1. Hacer un programa que pida al usuario que digite una cadena de
caracteres, luego verificar la longitud de la cadena, y si ésta supera a 10
caracteres mostrtarla en pantalla, caso contrario no mostrarla."""

frase = input('Digite una frase: ')

if len(frase) >= 10:
    print(frase)
else:
    print('Tiene menos de 10 caracteres')
