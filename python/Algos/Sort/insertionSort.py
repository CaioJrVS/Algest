import importlib

def insertionSort(arr):
    for i in range(len(arr)):
        j=i
        while j>0 and arr[j] < arr[j-1]:
            arr[j],arr[j-1] = arr[j-1],arr[j]
            j -=1
importlib.import_module('insertionSort')
