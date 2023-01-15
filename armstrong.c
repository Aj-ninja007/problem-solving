#include<stdio.h>
#include<math.h>
int armstrong(int n);
void main()
{
int n,t=0,a,result=0;
int count=0;
printf("enter the number");
scanf("%d",&n);
t=n;
}
int armstrong(int n)
{

while(n!=0)
{
a=n%10;
n=n/10;
count++;
}
 while (t != 0) {
       int re;
        re = t % 10;
        
       result = result + pow(re,count);
    }
    if(n==t)
    {
printf("%d",result);
    }

}



