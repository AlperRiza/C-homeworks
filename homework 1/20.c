#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	b = 0;
	
	scanf("%d", &a);
	
	while(a > 0)
	{
		a /= 10;
		b++ ;
	}
	printf("%d", b);
	return 0;
}
