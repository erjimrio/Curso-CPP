"""3. Realice un programa que calcule y muestre en la salida estándar la suma
de los cuadrados de los 10 primeros enteros mayores que cero."""
num = 0
for i in range(11):
    num = num + pow(i, 2)

print('El resultado de la sumatoria es: ', num)
