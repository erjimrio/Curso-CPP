"""4. Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la más alta y la más baja."""

sumatoria = 0
maxima = 0
minima = 999
for i in range(0, 24, 4):
    temp = float(input('Lectura de temperatura de las {} hrs: '.format(i)))
    sumatoria = sumatoria + temp
    if temp > maxima:
        maxima = temp
    elif temp < minima:
        minima = temp
media = sumatoria/6
print('Temperatura media del día = ', str(round(media, 2)))
print('La temperatura más alta fue: ', str(round(maxima, 2)))
print('La temperatura más baja fue: ', str(round(minima, 2)))
