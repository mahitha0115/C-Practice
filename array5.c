//W.A.P to store and display characters to arrays
#include<stdio.h>
int main()
{
char symbol[5];
for(int i=0;i<=4;i++)
{
printf("enter symbols:\n");
scanf("%c",&symbol[i]);
}
for(int j=0;j<=4;j++)
{
printf("%c\n",symbol[j]);
}
return 0;
}

