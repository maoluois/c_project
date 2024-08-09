#include <stdio.h>

// 函数外定义 x 和 y 因此其他俩个文件中可以使用这俩个变量
int x;
int y;
int addtwonum()        // 定义函数没写语句表达式的时候不用 ;
{
	// 函数内声明变量 x 和 y 为外部变量
	extern int x;
	extern int y;

	x = 1;
	y = 2;

	return x + y;

}


	

int main()      
{
	int result;
	// 调用函数 addtwonum()
	result = addtwonum();

	printf("result 为：%d", result);


	return (0);



}
