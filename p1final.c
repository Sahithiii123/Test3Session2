#include <stdio.h>
#include<math.h>
void input(int *num1,int *den1,int *num2,int*den2)
{
  printf("enter the first fraction(num *space* den): ");
  scanf("%d %d", num1 ,den1);
  printf("enter the second fraction (num *space* den): ");
  scanf("%d %d" , num2 , den2);
}
 int find_gcd(int a,int b)
{
  int gcd;
   for(int i=1;i<=a && i<=b; ++i){
     if (a % i==0 && b % i==0){
       gcd=i;
       }
       }
 return gcd;
}
void add(int num1, int den1,int num2 ,int den2, int *num3, int *den3)
{
 int a,b,gcd;
  a=(num1*den2) + (num2 * den1);
  b=(den1 * den2);

  gcd = find_gcd(a,b);

  *num3= a/gcd;
  *den3= b/gcd;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,num2,den1,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}

  
