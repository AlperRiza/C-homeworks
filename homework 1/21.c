#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	
	scanf("%d", &a);
	
	c = a % 10;
	
	while(a >= 10)
	{
		a /= 10;
	}
	printf("%d %d", a, c);
	
	return 0;
}
