#include<stdio.h>
int main()
{
int a,b,c,n;
while(c!=0)
{
a=c%10;
b=b+a*a*a;
c=c/10;
if(b==c)
printf("armstrong number \n");
scanf("%d",n);
}
return 0;
}
