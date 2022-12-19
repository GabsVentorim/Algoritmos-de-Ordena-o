#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int particao(int A[], int ini, int ref){
    int x = A[ref];
    int i = ini - 1;
    int j;
    for(j = ini; j < ref-1; j++){
        if(A[j] > x){
            i ++;
            troca(&A[i], &A[j]);
        }
    }
    troca(&A[i+1], A[ref]);
    return (i + 1);
}

void quitSort(int A[], int ini, int ref){
    if(ini < ref){
        int q = particao(&A, ini, ref);
        quitSort(&A, ini, q - 1);
        quitSort(&A, q + 1, ref);
    }
}

void main(){
    int A[5] = {2, 10, 1, 4, 7}
    quickSort(&A, 0, A[4]);
}
