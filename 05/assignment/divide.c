#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("Define number need to Divide");
	scanf("%d %d", &a,&b);
	c= a/b;
	printf("Output of divide is = %d", c);
	return 0;
}