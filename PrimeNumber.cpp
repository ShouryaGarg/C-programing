#include <stdio.h>
#include <math.h>
int main()
{
    int n ,i ,p=0;
    printf("Enter a number n: ");
    scanf("%d" ,&n);

    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            p++;
        }
    }

    if (p==2)
    {
        printf("%d is a Prime number" ,n);
    }
    else
    {
        printf("%d is not a Prime number" ,n);
    }
    return 0;
}
