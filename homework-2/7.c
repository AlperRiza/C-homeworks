#include <stdio.h>

int main()
{
	
	int n, a, i;
	
	scanf("%d", &n);
	
	if(n > 2)
	{
		printf("2\n");
		
		for(i=3; i <= n; i++)
		{
			for(a = 2; a < i; a++)
			{
				if(i % a == 0)
				{
					break;
				}
				if(a == i - 1)
				{
					printf("%d\n", i);
				}
			}
		}
	}
	else if(n == 2)
	{
		printf("%d", n);
	}
	
	return 0;
}
