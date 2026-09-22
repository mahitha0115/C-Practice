//write a program to check whether the given character is a vowel or not using switch
# include <stdio.h>
int main()
{
char x;
printf("Enter a character:");
scanf("%c",&x);
switch(x)
{
  case 'A':
  printf("A is vowel\n");
  break;
  case 'a':
  printf("a is vowel\n");
  break;
  case 'E':
  printf("E is vowel\n");
  break;
  case 'e':
  printf("e is vowel\n");
  break;
  case 'I':
  printf("I is vowel\n");
  break;
  case 'i':
  printf("i is vowel\n");
  break;
  case 'O':
  printf("O is vowel\n");
  break;
  case 'o':
  printf("o is vowel\n");
  break;
  case 'U':
  printf("U is vowel\n");
  break;
  case 'u':
  printf("u is vowel\n");
  break;
  default:
  printf("%c is not a vowel\n",x);
  }
  return 0;
}
