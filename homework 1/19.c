#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i;
	
	scanf("%d", &a);
	
	for(i=1; i<=10; i++)
	{
		b = a * i;
		printf("%d\n", b);
	}
	
	return 0;
}
