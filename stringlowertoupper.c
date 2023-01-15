#include<stdio.h>
void main()
{
char  ch,l;
printf("enter the character");
scanf("%c",&ch);
if(ch>65 && ch<97)
{
    printf("%c",ch+32);
}
else 
printf("%c",ch-32);

}
