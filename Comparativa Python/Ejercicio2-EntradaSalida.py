"""2. Escribe un programa que lea de la entrada estándar el precio de un
producto y muestre en la salida estándar el precio del producto al aplicarle
el IVA."""

precio = float(input("Digite el precio del producto: "))

iva = precio*.16

print('El precio del producto con IVA es: $', precio+iva)
