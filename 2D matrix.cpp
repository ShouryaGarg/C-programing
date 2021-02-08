#include <stdio.h>
int main()
{
    int M[100][100] ,i ,j ,r ,c;
    printf("Enter number of rows : ");
    scanf("%d" ,&r);
    printf("Enter number of coloumns : ");
    scanf("%d" ,&c);
    printf("Enter values for matrix : \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter a[%d][%d] value : " ,i+1 ,j+1);
            scanf("%d" ,&M[i][j]);
        }
    }
    printf("Matrix \n");
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                printf(" %d " ,M[i][j]);
            }
        printf("\n");
        }
    return 0;
}
