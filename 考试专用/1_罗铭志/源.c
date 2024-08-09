#include <stdio.h>




double sum(int num)
{
	
	double total = 0;
	for (double i = 1; i <= num; i++)

		
		total = total +  pow(i * 2, i);


	return total;
}


int main()
{
	
	double num1;
	printf("请输入n的值:");
	
	scanf_s("%lf", &num1);
	
	
	printf("结果为：%f", sum(num1));

	return 0;

}