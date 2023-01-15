#include<stdio.h>
void main(){
    int i,j,start,end,n;
    while(n!=0){
        for(i=0;i<=4;i++)
        for(j=0;j<=4;j++)
        if(i==0||j==0||i==4||j==4){
            printf("%d",n);

        }
        n--;
        
    }
}