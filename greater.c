#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a,b,c:");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c)){
printf("\nais greater than b and c");
}
else if((b>a)&&(b>c)){
printf("\nb is greater than a and c");
}
else{
printf("\nc is greater than a and b");
}
return 0;
}
