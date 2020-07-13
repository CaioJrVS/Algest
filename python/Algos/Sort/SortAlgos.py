from time import process_time
import random
import insertionSort as iS 
import mergesort as mS

print("Digite a quantidade de numeros entre 2 e 1000: ",end ="")

quantidade_numeros= int(input())
lista_numeros_aleatorios = []
for i in range(quantidade_numeros):
    lista_numeros_aleatorios.append(random.randrange(1,200))

# Algoritmo pra ordenar os numeros da array 

print("Escolha 1 para Insertion Sort e 2 para Merge Sort ")
option = int(input())

t1_start= process_time()

if(option == 1):
    iS.insertionSort(lista_numeros_aleatorios)
if(option == 2):
    mS.mergesort(lista_numeros_aleatorios,0,quantidade_numeros-1)

t1_stop = process_time()

print(lista_numeros_aleatorios)
print("Elapsed time during whole program: ", t1_stop-t1_start)
