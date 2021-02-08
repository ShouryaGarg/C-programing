#include <stdio.h>
int main()
{
    int A[100], n, i, s, l;
    printf("Enter the number of elements : ");
    scanf("%d" ,&n);
    printf("Enter elements : ");

    for(i=0;i<n;i++)
    scanf("%d" ,&A[i]);

    l = s = A[0];
    for(i=1;i<n;i++)
    {
        if (l<A[i])
        l = A[i];
        if (s>A[i])
        s = A[i];
    }
    printf("The largest number is : %d" ,l);
    printf("\nThe smallest number is : %d" ,s);
    return 0;
}
