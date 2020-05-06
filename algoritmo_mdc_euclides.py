#ALGOTIMO DE EUCLIDES PARA ENCONTRAR O MDC ENTRE DOIS NUMEROS
def mdc_euclides(numero1, numero2):
    if numero2 == 0:
        return numero1
    else:
        return mdc_euclides(numero2,numero1%numero2)

print(mdc_euclides(13,5))
print(mdc_euclides(32, 28))
