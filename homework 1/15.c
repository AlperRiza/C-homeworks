#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	scanf("%d", &i);
	
	while(i>0)
	{
		printf("%d\n", i);
		i -= 1;
	}
	
	return 0;
}
