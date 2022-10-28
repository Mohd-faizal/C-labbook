#include <stdio.h>
int main()
{
double first,second,temp;
printf("Enter first number:");
scanf("%lf",&first);
printf("Enter second number:");
scanf("%lf",&second);
temp=first;
first=second;
second=temp;
printf("\nAfter swap,first number=%.2lf,first");
printf("After swap,second number=%.2lf,second");
return 0;
}
