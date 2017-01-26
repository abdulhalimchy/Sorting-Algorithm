#include<stdio.h>
#define INF 214748346
void marging(int A[], int p, int q, int r);
void marge_sort(int A[], int p, int r);
int main()
{
    int a[100], n;
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nSorted Array is: \n");
    marge_sort(a, 0, n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void marging(int A[], int p, int q, int r)
{
    int n1=q-p+1, n2=r-q;
    int L[100], R[100], i, j;
    for(i=1; i<=n1; i++)
        L[i]=A[p+i-1];
    for(j=1; j<=n2; j++)
        R[j]=A[q+j];
    L[n1+1]=INF;
    R[n2+1]=INF;
    i=1, j=1;
    int k;
    for(k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}
void marge_sort(int A[], int p, int r)
{
    int q;
    if(p<r)
    {
        int q=(p+r)/2;
        marge_sort(A, p, q);
        marge_sort(A, q+1, r);
        marging(A, p, q, r);
    }
}
