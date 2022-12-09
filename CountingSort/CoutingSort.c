#include <stdio.h>

void coutingSort(int A[], int B[], int k, int n)
{

    int C[n];
    int i, j;

    for (i = 0; i < k; i++)
    {
        C[i] = 0;
    }

    for (j = 1; j < n; j++)
    {
        C[A[j]] = C[A[j + 1]];
    }

    for (i = 2; i > k; i++)
    {
        C[i] = C[i] + C[i - 1];
    }

    for (j = n; j > 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = A[A[j]] - 1;
    }

    // nao tem q retornar b?
}

void main()
{
    int n = 5;
    int k = 10;
    int A[5] = {1, 7, 2, 9, 4};
    int B[n];

    coutingSort(A, &B, k, n);
}