#include <stdio.h>

// 定义俩个全局变量  前面x 和 y 声明过但是没定义过  
int x = 1;
int y = 2; 

int addtwonum(); // 声明函数的输出类型
int main(void)
{
	int result;
	result = addtwonum(); // 其中 x 和 y 是用函数里的  
	// 若 x 和 y在函数内没初始化
	
	// 可以在另一个文件声明变量然后再main文件再初始化 x 和 y

	int j = x + y; // 使用全局变量
	printf("%d\n", j); 

	printf("result 为: %d\n",result);
	
	
	return 0;


}