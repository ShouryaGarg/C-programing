#include<stdio.h>
int main()
{
  int A[100],B[100],C[100],i ,m ,n;
  printf("Enter number of elements in A : ");
  scanf("%d" ,&m);
  printf("Enter numbers in A : ");
  for(i=0;i<m;i++)
  scanf("%d",&A[i]);
  printf("Enter number of elements in B : ");
  scanf("%d" ,&n);
  printf("Enter numbers in B : ");
  for(i=0;i<n;i++)
  scanf("%d",&B[i]);
  printf("Before swapping");
  printf("\nA : ");
  for(i=0;i<m;i++)
  {
            printf("%d ",A[i]);
  }
  printf("\nB : ");
  for(i=0;i<n;i++)
  {
            printf("%d ",B[i]);
  }
  for(i=0;i<n;i++)
  {
       C[i] = A[i];
       A[i] = B[i];
       B[i] = C[i];
  }
  printf("\nAfter swapping");
  printf("\nA : ");
  for(i=0;i<n;i++)
  {
            printf("%d ",A[i]);
  }
  printf("\nB : ");
  for(i=0;i<m;i++)
  {
            printf("%d ",B[i]);
  }
  return 0;
}
