//write a c program to display and store roll numbers of 5 students using arrays 
#include <stdio.h>
int main()
{
int hallticket[5],i;
for(i=0;i<=4;i++)
{
printf("Enter the roll number:");
scanf("%d",&hallticket[i]);
}
for(int j=0;j<=4;j++)
{
printf("roll numbers are %d\n",hallticket[j]);
}
return 0;
}
