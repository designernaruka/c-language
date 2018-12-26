#include <stdio.h>
#include <limits.h>

int main()
{
	int a,b,c,d,e,f;
  printf("Enter two numbers.");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  f= a+b-c*d/e;
  printf("Total Output of expression is = %d",f);
  return 0;
}
