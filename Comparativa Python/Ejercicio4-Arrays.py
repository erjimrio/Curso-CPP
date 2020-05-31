"""4. Escribe un programa que defina un vector de números y muestre en la
salida estándar el vector en orden inverso - del último al primer elemento."""

miLista = [1, 2, 3, 4, 5]

for i in range(len(miLista)):
    print(miLista[-i-1], ' ', end="")
