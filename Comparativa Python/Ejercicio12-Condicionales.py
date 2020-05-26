"""
12. Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un número
Caso 2: Número par o impar
Caso 3: Salir
"""

print('\tMenú virtual')
print('1. Cubo de un número')
print('2. Número par o impar')
print('3. Salir')
opcion = int(input('Digite opción [1-3]: '))

if opcion == 1:
    num = float(input('Digite un número: '))
    resultado = pow(num, 3)
    print('El resultado es: ', str(round(resultado, 2)))
elif opcion == 2:
    num = int(input('Digite un número: '))
    if num == 0:
        print('El número es cero')
    elif num % 2 == 0:
        print('El número es par')
    else:
        print('El número es impar')
elif opcion == 3:
    print('Fin de programa')
else:
    print('Opción No valida')