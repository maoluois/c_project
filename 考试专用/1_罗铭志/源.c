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
	printf("������n��ֵ:");
	
	scanf_s("%lf", &num1);
	
	
	printf("���Ϊ��%f", sum(num1));

	return 0;

}