#include<stdio.h>
void namasta();
void bonjour();
int main()
{
    printf("enter f for french & i for indian");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
       namasta();
    }
     else
bonjour();
return 0;
}
void namasta(){
    printf("namasta\n");
}
void bonjour(){
    printf("bonjour");
}


