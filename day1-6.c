#include<stdio.h>
void main(){
  int a,b,c;
  printf("enter the value a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b==c)
  {
    printf("equilateral triangle");
  }
  else if(a==b!=c||a!=b==c){
    printf("issocles triangle");
  }
  else{
    printf("not equal");
  }
}