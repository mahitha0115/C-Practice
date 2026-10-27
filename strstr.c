#include <stdio.h>
#include <string.h>
int main() {
	char s1[20],s2[20];
	printf("Enter string 1\n");
	gets(s1);
	printf("Enter string 2 \n");
	gets(s2);
	printf("String 1 is:%s \n",s1);
	printf("String 2 is:%s \n",s2);
	printf("result of strstr of string 1 and 2: %s\n",strstr(s1,"lo"));
	return 0;

}

