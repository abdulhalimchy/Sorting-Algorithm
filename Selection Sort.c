#include<stdio.h>
void selection_sort(int A[], int N)
{
    int k, temp, loc;
    for(k=1; k<N; k++)
    {
        loc=MIN(A, k, N);
        temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }
}
int MIN(int A[], int k, int N)
{
    int min, j, loc;
    min=A[k];
    loc=k;
    for(j=k+1; j<=N; j++)
    {
        if(min>A[j])
        {
            min=A[j];
            loc=j;
        }
    }
    return loc;
}
int main()
{
    int N, A[500], i;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &A[i]);
    }
    selection_sort(A, N);
    for(i=1; i<=N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
