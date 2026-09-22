//write a program to check for profit
# include <stdio.h>
int main()
{
int sellingprice,mrp;
printf("enter sellingprice,mrp:);
scanf("%d%d,&sellingprice,&mrp);
if(sellingprice>mrp)
{
printf("profit");
}
return 0;
}
