# 5. Hacer un programa que determine si una palabra es políndroma
def reversa(palabra):
    return palabra[::-1]


palabra = input('Digite una palabra: ')

rpalabra = reversa(palabra)

if palabra == rpalabra:
    print('{} es una palabra políndroma'.format(palabra))

else:
    print('{} no es una palabra políndroma'.format(palabra))
