#include<stdio.h>
int main()
{
  int n,rem,sum=0,c;
  printf("enter a numbers:");
  scanf("%d",&n);
  c=n;
  while(n>0)
  {
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
    }
 if(sum==c)
 {
     printf("it is armstong");
 }
 else
 {

     printf("it is not ");
 }
  return 0;
  }
