//write a program to perform addition of two numbers using functions cat2
#include <stdio.h>
int add();

int main() {
    int x;
	x=add();
	printf("add=%d",x);
	return 0;

}
int add()
{
    int a,b,c;
    a=10;
    b=9;
    c=a+b;
    return c;
}


