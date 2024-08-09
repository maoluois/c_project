
/*数据类型
基本数据类型：属于算术类型，包括int char float double(双精度浮点型）

枚举类型：属于算术类型，被用来定义在程序中只能赋予其一定地离散整数值地变量

void 类型：类型说明符void 表示没有值地数据类型，通常用于函数返回值
情况1：函数返回为空  e.g void exit(int status);

情况2: 函数参数为空(main()也算？）e.g int rand(void);

情况3: 指针指向void   类型void*的指针代表对象的地址, 而不是类型。 
e.g 内存分配函数void*malloc(size_t size); 返回指向void的指针, 可以转换为任何数据类型

派生类型： 包括数组类型，指针类型和结构体类型

其中指针类型和结构体类型被称为聚合类型
函数的类型是指函数返回值的类型
*/
#include <stdio.h>
#include <limits.h>  
#include <float.h>
//使用sizeof运算符可以得到对象或类型的存储字节大小

int main()
{
	printf("int 存储大小 : %lu\n",sizeof(int));
	
	
	printf("float存储最大字节数 ： %lu\n", sizeof(float));
	printf("float 最小值: %E\n", FLT_MIN);
	printf("float 最大值: %E\n",FLT_MAX);
	printf("精度值：%d\n", FLT_DIG);


	/*
	类型转换
	1，隐式类型转换: 将较小的类型转换为较大的类型 （自动发生的）
	e.g 将int 类型转换为long类型或float类型转换为double类型

	2. 显式类型转换: 将一个数据类型的值强制转换为另一种数据类型的值 （需要使用强制类型转换运算符）

	一个表达式中含有不同类型的常量和变量，在计算时。会将它们自动转换为同一种类型; 
	可以用作一种自动转换
	
	a. 浮点数赋给整型，该浮点数小数被舍去

	b. 整数赋给浮点型，数值不变，但是被存储到相应的浮点型变量中
	（最下面有俩者的例子）

	*/
	int i = 10;
	float f = 3.14;
	double k = i + f; // 隐式将int 类型转换为double 类型

	double d = 3.14159;
	int p = (int)d;  // 显式将double 类型转化为 int类型

	// 对于强制自动转换
	float e, x = 3.6, y = 5.2; 
	int j = 4, a, b;
	a = x + y;
	b = (int)(x + y);
	e = 10 / j;
	printf("a = %d, b = %d, e = %d, x = %f\n", a, b, e, x);
	printf("a = %d, b = %d, e = %f, x = %f\n", a, b, e, x);
	
	 


	return 0;
}
// 单引号只保存一个字符
// 双引号可表示多个字符
