#include<stdio.h>
void main(){
    int temp;
    printf("enter the temp");
    scanf("%d",&temp);
    if(temp<0){
        printf("freezing point");
    }
    else if(0<=temp<10)
    {
        printf("very cold");
    }
    else if(10<=temp<20){
        printf("cold weather");
    }
    else if(20<=temp<30){
        printf("normal");
    }
    else{
     printf("hot");
    }
}