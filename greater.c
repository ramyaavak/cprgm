#include<stdio.h>
int main
{
int a,b,c;
printf("Enter a,b,c:");
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\n%d is greater than %d and %d",a,b,c);
else if((b>a)&&(b>c))
printf("\n%d is greater than %d and %d",b,a,c);
else
printf("\n%d is greater than %d and %d",c,b,a);
return 0;
}
