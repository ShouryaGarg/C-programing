#include <stdio.h>
#include <math.h>
int main()
{
    int n ,i;
    float p;
    printf("Enter a number n: ");
    scanf("%d" ,&n);

    p=sqrt((double)n);
    i=p;

    if (i==p)
        printf("%d is a perfect square" ,n);
    else
        printf("%d is not a perfect square" ,n);

    return 0;
}
