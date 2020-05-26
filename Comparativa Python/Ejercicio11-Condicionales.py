# 11. Hacer un programa que simule un cajero automático con un saldo inicial
# de 1000 Dólares.

saldoInicial = 1000.00

print('\tBienvenido a su cajero virtual')
print('1. Ingresar dindero en cuenta')
print('2. Retirar dindero en cuenta')
print('3. Salir')
opcion = int(input('Digite el número deseado [1-3]: '))

if opcion == 1:
    cantidad = float(input('Digite cantidad a depositar: '))
    saldo = saldoInicial + cantidad
    print('Dinero en cuenta: $', str(round(saldo, 2)))
elif opcion == 2:
    cantidad = float(input('Digite cantidad a retirar: '))
    if cantidad > saldoInicial:
        print('Saldo insuficiente')
    else:
        saldo = saldoInicial - cantidad
        print('Dinero en cuenta: $', str(round(saldo, 2)))
elif opcion == 3:
    print('Fin de programa')
else:
    print('Valor fuera de rango')
