// write a program to check sum of individual digits of a given number 
# include <stdio.h>
int main()
{
 int n,x,sum;
 printf("Enter a number:");
 scanf("%d",&n);
 sum=0;
 while(n>0)
 {
 x=n%10;
 sum=sum+x;
 n=n/10;
 }
 printf("sum of digits=%d",sum);
 return 0;
}

