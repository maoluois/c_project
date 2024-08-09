#include <stdio.h>

int Find(int num)
{

	int FBNQ[100000];

	FBNQ[0] = 1;

	FBNQ[1] = 1;


	if (num == 1 || num == 2) {
		return 1;

		return 0;
		// ||代表或 ，  &&代表和
	}

	
	for (int i = 2; i < num; i++)
	{
		FBNQ[i] = FBNQ[i - 2] + FBNQ[i - 1];

	}
	return FBNQ[num - 1];
}
	
	
	/*
	int i = 2;
	while (i < num)
	{
		FBNQ[i] = FBNQ[i - 2] + FBNQ[i - 1];

		i ++;

	}

	return FBNQ[num - 1];
}
    */
int main()
{	
	int num1;
	printf("您要查找第几项?\n");
	
	scanf_s("%d", &num1);
	
	int result = Find(num1);
	
	printf("斐波那契数列的第%d项是:%d\n", num1, result);
}