#include<stdio.h>
void main()
{
    int a,b;
    int *p=&a;
    int *p1=&b;
    
   
   printf("Enter first Number  ");
    scanf(" %p",p);
    printf("Enter Second Number  ");
    scanf(" %p",p1);
    

    printf("\n%d",(*p+*p1)); 
}