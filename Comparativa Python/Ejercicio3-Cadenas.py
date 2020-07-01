"""3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas
cadenas son iguales, en caso de no serlo, indicar cuál es mayor
alfabéticamente"""

frase1 = input('Digite una frase: ')
frase2 = input('Digite otra frase: ')

if frase1 == frase2:
    print('Ambas frases son iguales')
elif frase1 > frase2:
    print('{} es mayor alfabéticamente'.format(frase1))
else:
    print('{} es mayor alfabéticamente'.format(frase2))
