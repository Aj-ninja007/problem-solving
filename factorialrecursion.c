#include<stdio.h>
int fact(int n);
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    int factf1=fact(n-1);
    int fcatf=factf1*n;
        return fcatf;
        
    

}