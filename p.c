#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<=4-i;k++)
        {
        printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==2||j==4||j==6)
            {
                printf("@");
            }
            else{
            printf("*");
            }
        }
        printf("\n");
    }
}