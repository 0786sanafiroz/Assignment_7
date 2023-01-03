#include<stdio.h>
int main()
{
int n,x=2,i;
 printf("enter a no.");
 scanf("%d",&n);
 while(n)
 {
   for(i=2;i<x;i++)
   if(x%i==0)
   break;
   if(i==x)
   {
   printf("%d\n",x);
   n--;
   }
   x++;
 }
 return 0;
}
