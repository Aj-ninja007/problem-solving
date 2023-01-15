#include<stdio.h>
int threetimes(int n);
int main()
{
        int n;
        int p;
        printf("enter the value ");
        scanf("%d",&n);
       p=threetimes(n);
        printf("%d",p);

}
int threetimes(int n) 
{
   int p=0;
   p=3 * n;
   return p;
}