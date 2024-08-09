/*
在c语言中，字符串实际上是使用空字符\0结尾的一堆字符数组。因此,\0是用于标记字符串的结束

空字符又称结束符，缩写为NUL，是一个数值为0的控制字符，\0是转义字符，告诉编辑器这不是字符0




*/
#include <stdio.h>
#include <string.h>
int main()
{
	char site[7] = { 'R', 'U', 'N', 'O', 'O', 'B', '\0' };
	printf("菜鸟教程：%s\n", site);

	char str1[14] = "runoob";
	char str2[14] = "google";
	char str3[14];
	size_t len;

	// 复制str1到str3
	strcpy_s(str3,  sizeof(str3), str1); // char 是一字节的所以不除第一个元素长度也可以
	printf("strcpy(str3, str1): %s\n", str3);

	int size = sizeof(str3);
	printf("大小是%d\n", size);

	strcat_s(str1, sizeof(str1), str2);
	printf("strcat(str1, str2): %s\n", str1);

	len = strlen(str1);
	printf("strlen(str1): %zd\n", len); // 不含'\0'?

	int n[] = { 0, 1, 2, 3, 4 };

	printf("%p\n", &n[0]);
	int m = &n[0] + 1;
	printf("%p\n", m);
	printf("%p\n", &n[1]); // 第一项的地址加1即为第二项的地址





	return 0;
}

