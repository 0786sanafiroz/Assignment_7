#include<stdio.h>
int main()
{
 int i,n,a,b,c;
 a=0;
 b=1;
 printf("enter the two no.");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%d",a);
   c=a+b;
   a=b;
   b=c;
   }
   return 0;
   }
