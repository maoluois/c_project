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
	
	printf("��������Ҫ��ת���ַ���\n");
	scanf_s("%s", zifu , sizeof(zifu));
	
	printf("��ת����ַ���Ϊ��");
	restr(zifu);
	return 0;
}