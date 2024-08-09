#include <stdio.h>
int main(void)
{
	int ch;
	
	for (ch = 75; ch <= 100; ch++ ) {      // for 循环的使用？
		printf("ASCII 值 = %d, 字符 = %c\n", ch, ch); //ASCII美国信息交换标准代码 
		//一种编码方式，将文本转化为数值信号

	}


	char dh = 'A';
	char str[20] = "www.runoob.com"; //字符串的长度最高是20位 数组的概念要理解？
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("字符为 %c\n", dh);
	printf("字符串为 %s\n", str);
	printf("浮点数为 %f\n", flt);
	printf("整数为 %d\n", no);
	printf("双精度值为 %f\n", dbl); //精度高一点，小数点后的位数高一点
	printf("八进制值为 %o \n", no);
	printf("十六进制为 %x \n", no);
	/*
	%u 十进制无符号整数  ？？ 无符号就是没有正负号 有符号就是有正负号，正号通常可以省略
	unsigned 表示无符号
	%p 指针的值
	%e 指数形式的浮点数
	%lu 32位无符号整数 
	%llu 64位无符号整数
	%p 输出地址符
	
	*/
	return 0;

	//具体的菜鸟教程上还有补充


}