#include <stdio.h>
int main()
{
	int result = 0;
	int n = 0;
	int j;
	for (int i = 500; i <= 600; i ++)
	{
		for (j = 2; j <= (i / j); j++) {

			if (!(i % j))
			{
				break;
			}
		}
		if (j > (i / j))
		{
			printf("%d\n", i);
			result = result + i;

			n++;
		}
	}
	printf("总和是：%d,个数是：%d\n ", result, n);

	return 0;
}


