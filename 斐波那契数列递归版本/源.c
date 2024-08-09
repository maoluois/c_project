#include <stdio.h>
int fibonaci(int i)
{
	if (i == 0)
	{
		return 0; // 可作为结束语句，作为函数调用时输出0  
		// 这是递归必须要注意的：定义一个从函数退出的条件
	}
	if (i == 1)
	{
		return 1; 

	}

	return fibonaci(i - 1) + fibonaci(i - 2); // 递推公式 ——> 对于数列的一系列处理都可以考虑递归

}

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", fibonaci(i));


	}
	return 0;
}
