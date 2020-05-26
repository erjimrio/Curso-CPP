# 7. Escriba un programa que solicite una edad (entero) e indique en la salida
# estándar si la edad introducida está en el rango [18-25].

edad = int(input('Digite edad: '))

if edad >= 18 and edad <= 25:
    print('La edad está dentro del rango [18-25]')
else:
    print('La edad está FUERA del rango [18-25]')
