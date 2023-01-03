#include<stdio.h>
int main()
{
int x,i,a,b;
 printf("enter a no.");
 scanf("%d %d",&a,&b);
 for(x=a+1;x<=b-1;x++)
 {
   for(i=2;i<x;i++)
   if(x%i==0)
   break;
   if(i==x)
   printf("%d\n",x);

 }
 return 0;
}
