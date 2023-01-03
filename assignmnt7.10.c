#include<stdio.h>
int main()
{
 int n,r,x,sum=0;
 printf("armstrong number is:");
 for(n=1;n<=100;n++)
 {
  x=n;
  while(x!=0)
  {
   r=x%10;
   sum=sum+(r*r*r);
   x=x/10;
   }
   printf("%d\n",n);
 }
   return 0;
   }
