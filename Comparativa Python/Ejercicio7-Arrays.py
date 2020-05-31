"""7. Realiza un programa que defina dos vectores de caracteres y después
almacene el contenido de ambos vectores en un nuevo vector, situando en primer
lugar los elementos del primer vector seguido por los elementos del segundo
vector. Muestre el contenido del nuevo vector en la salida estándar."""

miLista1 = ['a', 'b', 'c', 'd', 'e']
miLista2 = ['f', 'g', 'h', 'i', 'j']
miLista3 = []

# Copiando miLista1 en miLista3

for i in range(len(miLista1)):
    miLista3.append(miLista1[i])

# Copiando miLista2 en miLista3
for i in range(len(miLista2)):
    miLista3.append(miLista2[i])

# Imprimiendo miLista3

print('El nuevo array es:')
print(miLista3)
