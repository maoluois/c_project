#include <stdio.h>
int fibonaci(int i)
{
	if (i == 0)
	{
		return 0; // ����Ϊ������䣬��Ϊ��������ʱ���0  
		// ���ǵݹ����Ҫע��ģ�����һ���Ӻ����˳�������
	}
	if (i == 1)
	{
		return 1; 

	}

	return fibonaci(i - 1) + fibonaci(i - 2); // ���ƹ�ʽ ����> �������е�һϵ�д������Կ��ǵݹ�

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
