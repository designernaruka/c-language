#include<stdio.h>
#include<math.h>

int main()
{
  int a,b,c;
  printf("Enter Three numbers.");
  scanf("%d %d %d",&a,&b,&c);
  if (a < b) {
  	printf("This number is minimum = %d", a)
  	else if (a > c) {
  		printf("This number is minimum = %d", a)
  	}
  	else if (b > a) {
  		printf("This number is minimum = %d", b)
  	}
  	else if (b > c) {
  		printf("This number is minimum = %d", b)
  	}
  	else if (c > a) {
  		printf("This number is minimum = %d", c)
  	}
  	else (c > b) {
  		printf("This number is minimum = %d", c)
  	}
  	else if (c > a) {
  		printf("This number is minimum = %d", c)
  	}
  	else (a > c) {
  		printf("This number is minimum = %d", a)
  	}
  }
  return 0;
}
