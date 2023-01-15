#include<stdio.h>
void main(){
    int b,h,d,a,p,total;
    printf("enter the b");
    scanf("%d",&b);
    h=(20%100)*b;
    d=(50%100)*b;
    a=(19%100)*b;
    p=(11%100)*b;
    total=h+b+a+d-p;
    if(h==1700)
    {
        printf("A grade");
    }
       else if(d==1500){
           printf("B");
       }
      else if(a==1300){
        printf("c");
      }
      printf(" total:%d\n",total);
    

}   