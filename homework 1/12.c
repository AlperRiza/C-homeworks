#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, i;
	
	scanf("%d%d%d", &a, &b, &c);
	
	for(i=a; i<=b; i+=c)
	{
		printf("%d\n", i);
	}
	return 0;
}
