#include <stdio.h>

int main()
{
	int num;
	printf("������һ��������\n");

	scanf_s("%d", &num);
	
	int total = 1;
	for (int i = 1; i <= num; i++)
		total = total * i;
	
	printf("%d�Ľ׳���%d",num,total);

}