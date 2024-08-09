#include <stdio.h>
void restr(char *str) {
	if (*str != '\0')
	{
		restr(str + 1);
		printf("%c", *str);
	}
}

int main()
{
	char zifu[30];
	
	printf("请输入需要翻转的字符串\n");
	scanf_s("%s", zifu , sizeof(zifu));
	
	printf("翻转后的字符串为：");
	restr(zifu);
	return 0;
}