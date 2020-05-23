# 3. Escribe la siguiente expresión (a+(b/c))/(d+(e/f))

a = float(input('Digite valor de a: '))
b = float(input('Digite valor de b: '))
c = float(input('Digite valor de c: '))
d = float(input('Digite valor de d: '))
e = float(input('Digite valor de d: '))
f = float(input('Digite valor de f: '))

resultado = (a+(b/c))/(d+(e/f))

print('El resultado es: ', str(round(resultado, 2)))
