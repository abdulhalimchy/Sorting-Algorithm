#include<stdio.h>
#define infinity -2147483648
void insertion_sort(int A[], int N)
{
    A[0]=infinity;
    int k, temp, ptr;
    for(k=2; k<=N; k++)
    {
        temp=A[k];
        ptr=k-1;
        while(temp<A[ptr])
        {
            A[ptr+1]=A[ptr];
            ptr=ptr-1;
        }
        A[ptr+1]=temp;
    }
}
int main()
{
    int N, A[500], i;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &A[i]);
    }
    insertion_sort(A, N);
    for(i=1; i<=N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
