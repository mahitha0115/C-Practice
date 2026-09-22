// write a progarm to check for vote eligible or not eligible 
# include <stdio.h>
int main()
{
int age;
printf("enter age:");
scanf("%d",&age);
if(age>=18)
{
printf("eligible for vote");
}
if(age<18)
{
printf("not eligible for vote");
}
return 0;
}
