// write a program to check whether the given number is prime or not
# include <stdio.h>
int main()
{
int i,n,count;
printf("Enter a number:");
scanf("%d",&n);
count=0;
for(i=1;i<=n;i++)
{
  if(n%i==0)
  {
    count++;
  }
}
if(count==2)
{
  printf("%d is a prime number\n",n);
 }
 return 0;
}

