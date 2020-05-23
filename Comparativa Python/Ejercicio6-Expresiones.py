"""6. Escriba un programa que lea las tres notas de un alumno y calcule la
nota final media de dicho alumno."""

nota1 = float(input('Digite nota 1: '))
nota2 = float(input('Digite nota 2: '))
nota3 = float(input('Digite nota 3: '))

calificacion = (nota1+nota2+nota3)/3

print('La nota final es: ', str(round(calificacion, 2)))
