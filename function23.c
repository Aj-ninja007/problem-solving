#include<stdio.h>
int square(int n);
int main()
{
    int n;
   //  int *p=&n;
   int p=0;
   printf("enter the number");
    scanf("%d",&n);
   p=square(n);
    printf("%d",p);
}
int square(int x)
{
 // *x=(*x) * (*x) ;
 int p;
 p=x * x ;
 return p;
}