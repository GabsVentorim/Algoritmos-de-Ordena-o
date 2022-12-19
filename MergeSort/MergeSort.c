// FEITO EM C

#include <stdio.h>

void merge(int A[], int i, int m, int f)
{
    int n1 = m - i + 1;
    int n2 = f - m;

    /** OS ELEM + SENTS **/
    int L[n1 + 1];
    int R[n2 + 1];

    /** SENTINELAS **/
    L[n1] = 999;
    R[n2] = 999;

    /** FAZENDO COPIAS DOS ARRANJOS **/
    int j;
    for (j = 0; j < n1; j++)
    {
        L[j] = A[i + j];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = A[m + j + 1];
    }

    /** PERCORREM L, R e A **/
    int k1 = 0;
    int k2 = 0;
    int k;
    for (k = i; k <= f; k++)
    {
        if (L[k1] <= R[k2])
        {
            A[k] = L[k1];
            k1++;
        }
        else
        {
            A[k] = R[k2];
            k2++;
        }
    }
}

void mergeSort(int A[], int i, int f)
{
    if (i < f)
    {
        int m = (i + f) / 2;
        mergeSort(A, &i, &m);
        mergeSort(A, &m + 1, &f);
        merge(A, &i, &m, &f);
    }
}

void exibir(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

void main()
{
    int a[4] = {1, 5, 6, 2};
    mergeSort(&a, 0, 3);
    exibir(&a, 4);
}
