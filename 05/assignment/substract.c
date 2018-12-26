#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("Type two numbers for substract");
	scanf("%d %d", &a,&b);
	c= a-b;
	printf("Output of substract is = %d", c);
	return 0;
}