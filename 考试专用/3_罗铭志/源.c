#include <stdio.h>

void BubbleSort(float* arr, int size)
{
	int i, j;
	float tmp;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}
}




int main()
{
	float a, b, c, d;
	printf("请隔着逗号输入4个数：\n");

	scanf_s("%f,%f,%f,%f", &a, &b, &c, &d);

	float avg = (a + b + c + d) / 4;

	float a1 = avg - a;

	float b1 = avg - a;
	
	float c1 = avg - a;

	float d1 = avg - a;
	
	

	float n[] = { a1, b1, c1, d1 };
	
	BubbleSort(n, 4);

	
	//if (n[0] == n[1])





	printf("%f", avg - n[0]);
	return 0;
}