#include <stdio.h>
int main()
{
	int num;
	printf("������һ������:\n");
	scanf_s("%d", &num);
	

	for (int i = 2; i <= num / i; i++)
		if (!(num % i))
			printf("%d��������", num);
			return 0;
	
	printf("%d������", num);

}

