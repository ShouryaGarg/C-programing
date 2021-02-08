#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[100] ,B[100] ,C[100];
    int m ,n ,i ,j ,k;
    printf("Enter size of A : ");
    scanf("%d" ,&m);

    printf("Enter elements in A : ");
    for (i=0;i<m;i++)
    {
        scanf("%d" ,&A[i]);
    }
    printf("Enter size of B : ");
    scanf("%d" ,&n);

    printf("Enter elements in B : ");
    for (i=0;i<n;i++)
    {
        scanf("%d" ,&B[i]);
    }

    i = j = 0;
    for (k=0;k<m+n;k++)
    {
        if (i==m)
        {
            C[k]=B[j];
            j++;
        }
        else if (j==n)
        {
            C[k]=A[i];
            i++;
        }
        else if (A[i]<B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    printf("C = ");
    for (i=0;i<m+n;i++)
    {
        printf("%d " ,C[i]);
    }
    printf("\n");
    return 0;
}
