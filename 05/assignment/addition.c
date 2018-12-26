#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("Type two Numbers");
	scanf("%d %d", &a,&b);
	c= a+b;
	printf("Total of Numbers is = %d", c);
	return 0;
}