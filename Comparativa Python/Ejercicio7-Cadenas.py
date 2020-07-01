"""7. Pedir su nombre al usuario en MAYÚSCULAS, si su nombre comienza con la
letra A, convertir su nombre a minúsculas, caso contrario no convertirlo"""

nombre = input('Digite su nombre en MAYÚSCULAS: ')

if nombre[0] == 'A':
    print(nombre.lower())

else:
    print(nombre)
