"""5. Escriba un programa que lea de la entrada estándar un carácter e indique
en la salida estándar si el carácter es una vocal minúscula o no."""

caracter = input('Digite un caracter: ')
if caracter == 'a' or caracter == 'e' or caracter == 'i' or caracter == 'o' or caracter == 'u':
    print('Es una vocal minúscula.')
else:
    print('El caracter digitado NO es una vocal minúscula')
