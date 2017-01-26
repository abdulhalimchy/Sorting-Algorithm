#include<stdio.h>
int main()
{
    int n, ara[500], i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                int temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d ", ara[i]);
    return 0;
}
