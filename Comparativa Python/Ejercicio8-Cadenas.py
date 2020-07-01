"""8. Pedir al usuario 2 cadenas de caracteres de números, uno entero y el
otro real, convertirolos a sus respectivos valores y por último sumarlos"""

entero = input('Digite un número entero: ')
flotante = input('Digite un número flotante: ')

suma = int(entero) + float(flotante)

print('{} + {} = {}'.format(entero, flotante, suma))