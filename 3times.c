#include<stdio.h>
void mul(int *n);
int main()
{
    int n;
    int *p=&n;
    printf("enter the number ");
    scanf("%d",&n);
    //printf("%d",n);  
    mul(p);
    printf("%d",n);


}
void mul( int *x){
*x=*x * 3;
}