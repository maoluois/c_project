#include <stdio.h>

void BubbleSort(int *arr, int size) // void 的作用？ 函数没有返回值
{
	int i, j, tmp;
	for (i = 0; i < size - 1; i ++) {	// 每次循环完之后都可以少检查一次
		for (j = 0; j < size - i - 1; j++) {     
								// 将当前检查的数字中最大的放到当前检查数字的最后
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
	int n[] = {2,3,4,5,7,1,89,7};
	
	int size = sizeof(n) / sizeof(n[0]);

	BubbleSort(n, size);

	for (int i = 0; i < size; i++) 
	{
		printf("%d", n[i]);
	}

}