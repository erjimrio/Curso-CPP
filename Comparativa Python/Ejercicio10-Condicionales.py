"""10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12),
y mostrar el mes al que corresponde."""

mes = int(input('Digite un número entre [1-12]: '))

if mes == 1:
    print('El mes es enero')
elif mes == 2:
    print('El mes es febrero')
elif mes == 3:
    print('El mes es marzo')
elif mes == 4:
    print('El mes es abril')
elif mes == 5:
    print('El mes es mayo')
elif mes == 6:
    print('El mes es junio')
elif mes == 7:
    print('El mes es julio')
elif mes == 8:
    print('El mes es agosto')
elif mes == 9:
    print('El mes es septiembre')
elif mes == 10:
    print('El mes es octubre')
elif mes == 11:
    print('El mes es noviembre')
elif mes == 12:
    print('El mes es diciembre')
else:
    print('Valor digitado fuera de rango')
