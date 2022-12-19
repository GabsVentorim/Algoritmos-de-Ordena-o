#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

// n -> number of elements
void SelectionSort(int A[], int n){
    int i, j, min, x;
    for (i = 0; i < n ; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if (A[j]) < (A[min]))
                min = j;
        }
        troca(&(A[min]), &(A[i]));
    }
}
