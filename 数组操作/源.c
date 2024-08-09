#include <stdio.h>

// 声明一个数组
double balance[10]; //一个类型为double 的 包含 10个元素的数组balance
// 初始化数组
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

int i, j;

int n[10];





int main()
{
	// for (i = 0; i < 10; i++) {
		
		// printf("Element[%d] = %f\n", i, balance[i]); // 访问数组

	for (j = 0; j < 10; j++) {
		n[i] = i + 100;

	}
	
	int length = sizeof(n) / sizeof(n[0]); // size of是用来查字节数的

	printf("数组长度为：%d\n", length);

	int* ptr = &n[0]; // 或者直接写作 int *ptr = n
	// n为数组名同时也表示数组的地址
	
	// 数组的地址即数组第一个元素的地址

	// 数组名往往会自动转换为指向数组首元素的指针


}