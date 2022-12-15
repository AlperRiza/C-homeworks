#include <stdio.h>
#include <math.h>
int main()
{
	int n, z, i, y, sum, a;
	
	scanf("%d", &n);
	z = n;
	y = n;
	
	for(i = 0; z > 0; z /= 10, i++){}	//this line's purpose count how much digits are there in given number.
	
	while(y > 0)
	{
		a = y % 10;
		sum += pow(a, i);
		y /= 10;
	}
	if(sum == n)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
	
	return 0;
}
