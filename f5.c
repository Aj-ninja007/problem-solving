#include<stdio.h>
#include<math.h>
void square(int n);
int main(){
    int n;
    printf("enter the number of n");
    scanf("%d",&n);
   square(n);
  // printf("%d",n)
}
void square(int n){
    n=pow(n,2);
   printf("%d",n);
}