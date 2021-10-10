#include <stdio.h>
int main()
{
	int n, z;
	z = 0;
	scanf_s("%d", &n);
	while (n > 1)
	{
		if (n != 1)
		{
			if (n % 2 == 0)
				++z,
			   n = n / 2; 
			else
				++z,
				n = (n * 3 + 1) / 2;
		}
		else
			printf("z = %d\n", z);
	}
	printf("±»³ý´ÎÊý=%d", z);
	return 0;
}