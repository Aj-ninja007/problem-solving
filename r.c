#include<stdio.h>
float converttemp(float celsius);
int main()
{
 float far=converttemp(0);

 printf("%d",converttemp(far));
 return 0;
}
float converttemp(float celsius)
{
    float far=celsius*(9/5)+32;
    return far;
}