"""7. La calificación final de un estudiante es la media ponderada de tres
notas: La nota de prácticas que cuenta un 30% del total, la nota teórica que
cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba
un programa que lea de la entrada estándar las tres notas de un alumno y
escriba en la salida estándar su nota final."""

practica = float(input('Digite nota Práctica: '))
teorica = float(input('Digite nota Teórica: '))
participacion = float(input('Digite nota Participación: '))

calificacion = (practica * .3) + (teorica * .6) + (participacion * .1)

print('La calificación final es: ', str(round(calificacion, 2)))
