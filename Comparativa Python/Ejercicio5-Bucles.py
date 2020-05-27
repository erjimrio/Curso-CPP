"""5. Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introducidos."""

contador = 0
valores = int(input('Digite un número: '))
while(valores != 0 and (valores < 20 or valores > 30)):
    if valores > 0:
        contador += 1
    valores = int(input('Digite otro número: '))
print('Se digitaron {} números mayores que cero'.format(contador))
