#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, i, carpim;
	a = 6;
	
	for(i=1; i<11; i++)
	{
		carpim = i * a;
		printf("%d\n", carpim);
	}
	
	return 0;
}
