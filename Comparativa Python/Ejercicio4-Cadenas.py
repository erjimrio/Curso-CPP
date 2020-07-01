"""4. Crear una cadena que tenga la siguiente frase: "Hola que tal", luego
crear otra cadena para preguntarle al usuario su nombre, por último añadir el
nombre al final de la primer cadena y mostrar el mensaje completo "Hola que
tal (NombreDelUsuario)"."""

hola = "Hola que tal"

nombre = input('Digite su nombre: ')

print('{} {}'.format(hola, nombre))
