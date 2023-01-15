
#include<stdio.h>
#include<math.h>
int isArmstrong(int number) 
{

  // declare variables
  int lastDigit = 0;
  int power = 0;
  int sum = 0;
  int count=0;

  // temporary variable to store number
  int n = number;
  while(number>0)
  {
    int a;
    a=number%10;
    number=number/10;
    count++;
  }

  while(n!=0) {

     // find last digit
     lastDigit = n % 10;

 
     // find power of digit (order = 3)
     power = pow(lastDigit,count);

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }

  if(sum == number) return 0;
  else return 1;
}

int main()
{
  int number;

  printf("Enter number: ");
  scanf("%d",&number);

  if(isArmstrong(number) == 0)
  printf("%d is an Armstrong number.\n", number);
  else
  printf("%d is not an Armstrong number.", number);

  return 0;
}