# 6. Escriba un programa que lea de la entrada estándar un caracter e indique
# en la salida estándar si el caractér es una vocal minúscula, es una vocal
# mayúscula o no es una vocal.

caracter = input('Digite un caracter: ')
if caracter == 'a' or caracter == 'e' or caracter == 'i' or caracter == 'o' or caracter == 'u':
    print('Es una vocal minúscula.')
elif caracter == 'A' or caracter == 'E' or caracter == 'I' or caracter == 'O' or caracter == 'U':
    print('Es una vocal mayúscula.')
else:
    print('El caracter digitado NO es una vocal')
