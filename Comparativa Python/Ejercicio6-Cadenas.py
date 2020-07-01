"""7. Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas, y decir
si son iguales o no."""

palabra1 = input('Digite una palabra: ')
palabra2 = input('Digite otra palabra: ')

if palabra1.upper() == palabra2.upper():
    print('Ambas palabras SON iguales')
else:
    print('Ambas palabras NO SON iguales')