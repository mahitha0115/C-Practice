//write a program to check whether the given number is palindrome
# include <stdio.h>
int main()
{
int rev,rem,x,y;
printf("Enter a number:");
scanf("%d",&x);
y=x;
rev=0;
while(x>0)
{
rem=x%10;
rev=(rev*10)+rem;
x=x/10;
}
if(y==rev)
{
printf("%d is a palindrome number\n",y);
}
else
{
printf("%d is not a palindrome number",y);
}

return 0;
}




