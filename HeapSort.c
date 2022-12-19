#include <stdio.h>
#include <stdlib.h>

void troca(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// refaz o heap
void heapify(int v[], int N, int i){

    int maior = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    // esq > pai
    if (left < N && v[left] > v[maior])
        maior = left;

    // dir > pai
    if (right < N && v[right] > v[maior])
        maior = right;

    if (maior != i) {
        troca(&v[i], &v[maior]);
        heapify(v, N, maior);
    }
}

void heapSort(int v[], int N){
    int i;
    for(i = N/2 - 1; i >= 0; i--)
        heapify(v, N, i);

    for(i = N - 1; i >= 0; i--) {
        troca(&v[0], &v[i]);
        heapify(v, i, 0);
    }
}

void printArray(int v[], int N){
    for (int i = 0; i < N; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Driver's code
int main()
{
    int v[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(v) / sizeof(v[0]);

    heapSort(v, N);
    printf("Heap: ");
    printArray(v, N);
}
