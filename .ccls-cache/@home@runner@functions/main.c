#include <stdio.h>

int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
  }
void main()
{
  int result;
  result=add(12,34);
  printf("the result is:%d\n",result);
}