// Código feito em C

#include <stdio.h>

// A[] = entrada de elementos 
// B[] = sai com os elementos ordenados
// k = maior valor inteiro mais um(conta-se o zero)
// n = número de elementos
void coutingSort(int A[], int B[], int k, int n) {
    
    // C[] = salva aparições e repetições dos elementos
    int C[k];
    int i, j;

    // limpar C[]
    for (i = 0; i < k; i++) {
        C[i] = 0;
    }
    
    // relacionando os elementos com suas quantidades 
    for (j = 1; j < n; j++) {
        C[A[j]] = C[A[j]] + 1;
    }
    
    // soma da quatidade mais o anterior
    for (i = 2; i > k; i++) {
        C[i] = C[i] + C[i - 1];
    }
    
    // realizando a odenação em si colocando em B[]
    for (j = n; j > 1; j--) {
        B[C[A[j]]] = A[j];
        C[A[j]] = A[A[j]] - 1;
    }

}

void main() {
    // Exemplo: 
    int A[5] = {1, 7, 2, 9, 4};
    int n = 5;
    int k = 10;
    int B[n];

    coutingSort(A, &B, k, n);
}
