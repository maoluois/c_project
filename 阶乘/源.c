#include <stdio.h>

int main()
{
	int num;
	printf("请输入一个整数：\n");

	scanf_s("%d", &num);
	
	int total = 1;
	for (int i = 1; i <= num; i++)
		total = total * i;
	
	printf("%d的阶乘是%d",num,total);

}