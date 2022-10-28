#include <stdio.h>
int main()
{
double n,i,sum=0;
do{
printf("Enter a positive num:");
scanf("%d",&n);
}
while(n<=0);
for(i=1;i<=n;++i){
sum +=n;
}
printf("sum =%d",sum);
return 0;
}
