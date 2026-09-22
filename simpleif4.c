//write a program to print zero or positive or negative for the given number 
# include <stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a==0)
{
printf("zero \n");
}
if(a>0)
{
printf("positive \n");
}
if(a<0)
{
printf("negative \n");
}
return 0;
}

