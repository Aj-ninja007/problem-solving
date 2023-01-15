#include<stdio.h>
void main(){
    char ch,a,A,e,E,i,I,o,O,U,u;
    printf("enter the alphabet");
    scanf("%c",&ch);
    if(ch==a|| ch==A||ch==e||ch==E||ch==i||ch==I||ch==o||ch==O||ch==u||ch==U)
    {
        printf("vovel");
    }
    else{
        printf("constant");
    }
}