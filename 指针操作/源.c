#include <stdio.h>
int main()
{ 
	int var = 20; // 实际变量的声明
	int* ip;		// 指针变量的声明

	ip = &var; // 在指针变量中存储 var 的地址 &是用来访问地址的

	printf("var 变量的地址：%p\n", &var);

	printf("ip 变量存储的地址：%p\n", ip);

	printf("*ip 的变量的值：%p\n", *ip);
	// 总得来说，指针变量可以理解为一个存储地址的变量 其中*使用来访问在那个存储地址的变量的值的
	return 0;
	// 如果没有确切的地址可以赋值，为指针变量赋一个NULL值是一个好习惯
	int* ptr = NULL;  // 被赋予NULL值的指针为空指针

	printf("ptr 的地址是 %p\n", ptr);

	if (!ptr) // 如果p为空 ， 就执行下列操作
	{
		printf("找到了 %p\n", ptr);
	}
	return 0;
}