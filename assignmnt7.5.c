#include<stdio.h>
int main()
{
 int a,b,h;
 printf("enter two no.");
 scanf("%d %d",&a,&b);
 for(h=a<b?a:b; h>=1 ;h--)
  if(a%h==0&&b%h==0)
  break;
  if(h==1)
  {
   printf("it is co-prime");
  }
  else
  {
   printf("it is not co-prime");
   }
  return 0;
  }
