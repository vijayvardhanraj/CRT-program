#include<stdio.h>
int main()
{
int j,i,n;
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=n-1;j++)
printf(" ");
for(i=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
