#IMPLEMENTACAO DO ALGORITMO DE MERGE SORT EM PYTHON

#VETOR QUE SERA ORDENADO
vetor = [1,-2,3,4,6,6,-4,10]

#FUNCAO PARA FAZ O MERGE (JUNTA)
def merge(esquerda, direita):
    resposta = []
    
    while (len(esquerda) > 0) and (len(direita) > 0):
        try:
            if esquerda[0] < direita[0]:
                resposta.append(esquerda.pop(0))
            else:
                resposta.append(direita.pop(0))
        except:
            pass
    
    if len(direita) > 0:
        resposta += direita
    if len(esquerda) > 0:
        resposta += esquerda
    return resposta


#ALGORITMO MERGE_SORT
def mergeSort(vetor):
    if len(vetor) == 1:
        return vetor
    else:
        meio = int(len(vetor)/2)
        esquerda = mergeSort(vetor[:meio])
        direita = mergeSort(vetor[meio:])
        resposta = merge(esquerda[:], direita[:])
        return resposta

#PROGRAMA PRINCIPAL        
print(vetor)
print(mergeSort(vetor))