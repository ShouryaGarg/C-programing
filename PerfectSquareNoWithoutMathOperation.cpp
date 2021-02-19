#include <stdio.h>
int main()
{
    int n ,i;
    printf("Enter number n: ");
    scanf("%d" ,&n);

    for (i=0;i<=n;i++)
    {
        if (n==i*i)
        {
            printf("%d is a perfect square" ,n);
            return 0;
        }
    }
    printf("%d is not a perfect square" ,n);
    return 0;
}
