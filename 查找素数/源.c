#include <stdio.h>

int main()
{
	// �ֲ���������
	int i, j,flag;
	flag = 100;
	for (i = 2; i < 100; i ++) {
		for (j = 2; j < i; j ++);
			if (i % j == 0)
			{
				flag = 1;
				break;

			}
			else
			{
				flag = 0;
			}
		if (flag == 0)
		{
			printf("%d ������\n", i);
		}
	}

	return 0;
}

