#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个整数:\n");
	scanf_s("%d", &num);
	

	for (int i = 2; i <= num / i; i++)
		if (!(num % i))
			printf("%d不是质数", num);
			return 0;
	
	printf("%d是质数", num);

}

