#include <stdio.h>

void BubbleSort(int *arr, int size) // void �����ã� ����û�з���ֵ
{
	int i, j, tmp;
	for (i = 0; i < size - 1; i ++) {	// ÿ��ѭ����֮�󶼿����ټ��һ��
		for (j = 0; j < size - i - 1; j++) {     
								// ����ǰ�������������ķŵ���ǰ������ֵ����
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