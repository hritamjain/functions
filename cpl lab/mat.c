#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],c[10][10];
  int m,n,p,q;
  int i,j,k;
  printf("enter the order of matrix a:");
  scanf("%d%d",&m,&n);
  printf("enter the order of matrix b:");
  scanf("%d%d",&p,&q);
  if(n!=p)
    {
      printf(" the number of rows of matrix a is not equal to the number of columns of matrix b");
      printf("matrix multiplication not possible");
      return 1;
    }
  printf("\n enter %d elements of matrix a",m*n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  printf("\n elements of matrix a.....\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
        }
    }
  printf("\n");
  printf("\n enter %d elements of matrix b",p*q);
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
  printf("\n elements of matrix b.....\n");
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d\t",b[i][j]);
        }
    }
  printf("\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          for(k=0;k<n;k++)
            {
              c[i][j]=0;
              c[i][j]=c[i][j]+(a[i][k]*b[i][j]);
            }
        }
    }
  printf("the product matrix c.....\n\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d\t",c[i][j]);
        }
    
    }
  printf("\n");
  return 0;
}