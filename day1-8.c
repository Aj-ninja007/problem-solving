#include<stdio.h>
void main(){
    int x,y,c;
    printf("ente the coordinate");
    scanf("%d%d",&x,&y);
    if(x<0&&y<0)
    {
        printf("third coordinate");
    }
    else if(x==0&&y==0){
        printf("orign");
    }
    else if(x>0&&y>0){
        printf("first coor");
    }
    else if(x<0&&y>0)
    {
        printf("second coord");
    }
    else {
     printf("forth coord");
    }
}