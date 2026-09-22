//write a c program to read and display marks 
#include <stdio.h>
int main()
{
float marks[5];
for(int i=0;i<=4;i++)
{
printf("marks obtained :");
scanf("%f",&marks[i]);
}
for(int j=0;j<=4;j++)
{
printf("marks:%.2f\n",marks[j]);
}
return 0;
}
