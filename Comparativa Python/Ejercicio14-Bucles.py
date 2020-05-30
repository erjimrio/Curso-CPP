"""14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere
determinar el número de:

a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron almenos un examen.
c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo de las
estadísticas.
"""
TodosAprobados = 0
AlmenosUno = 0
Ultimo = 0
for i in range(1, 6, 1):
    examen1 = float(input('Alumno {}. Digite calificación examen 1: '.format(i)))
    examen2 = float(input('Alumno {}. Digite calificación examen 2: '.format(i)))
    examen3 = float(input('Alumno {}. Digite calificación examen 3: '.format(i)))

    if (examen1 >= 6 and examen2 >= 6 and examen3 >= 6):
        TodosAprobados += 1
    if (examen1 >= 6 or examen2 >= 6 or examen3 >= 6):
        AlmenosUno += 1
    if (examen1 < 6 and examen2 < 6 and examen3 >= 6):
        Ultimo += 1
    print('\n')
print('\nAlumnos que aprobaron todos los exámenes: ', TodosAprobados)
print('Alumnos que aprobaron almenos un examen: ', AlmenosUno)
print('Alumnos que aprobaron únicamente el último examen', Ultimo)
