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
   c=a+b;
   a=b;
   b=c;
   printf("%d",a);
  }
  if(n==a)
  {
      printf("yes");
  }
  else{
    printf("not");
  }
   return 0;
   }

