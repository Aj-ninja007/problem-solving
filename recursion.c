#include<stdio.h>
void printhw(int n);
int main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    printhw(n);
    return 0;
}//recursive function
void printhw(int n){
    if(n==0){
    return;
    }
    printf("hello world\n");
    printhw(n-1);
}