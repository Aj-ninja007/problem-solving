#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    
    printf("%d",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sums=sum(n-1);
    int sums1=sums+n;
    return sums1;
}