#include<stdio.h>
void printtable(int n);
int main()
{
  int n;
  printf("enter the value of n");
  scanf("%d",&n);
  printtable(n); //argument parameter
}
void printtable(int n){ //formal parameter
   for(int i=1;i<=10;i++)
   {
    printf("%d\n",n*i);
   }

}