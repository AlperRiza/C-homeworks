#include <stdio.h>

int main()
{
	
	int n, a, i, sum = 2;
	
	scanf("%d", &n);
	
	if(n > 2)
	{
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
					sum += i;
				}
			}
		}
		printf("%d", sum);
	}
	else if(n == 2)
	{
		printf("%d", n);
	}
	
	
	return 0;
}
