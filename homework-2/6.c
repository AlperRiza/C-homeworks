#include <stdio.h>
int main()
{	
	int a, b, c;
	
	printf("ekokunu hesaplayacaginiz 2 sayiyi giriniz.\n");
	
	scanf("%d%d", &a, &b);
	
	c = a;
	
	while(a % b !=0)
	{
		a += c;
	}
	printf("%d", a);

return 0;
}
