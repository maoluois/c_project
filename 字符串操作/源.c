/*
��c�����У��ַ���ʵ������ʹ�ÿ��ַ�\0��β��һ���ַ����顣���,\0�����ڱ���ַ����Ľ���

���ַ��ֳƽ���������дΪNUL����һ����ֵΪ0�Ŀ����ַ���\0��ת���ַ������߱༭���ⲻ���ַ�0




*/
#include <stdio.h>
#include <string.h>
int main()
{
	char site[7] = { 'R', 'U', 'N', 'O', 'O', 'B', '\0' };
	printf("����̳̣�%s\n", site);

	char str1[14] = "runoob";
	char str2[14] = "google";
	char str3[14];
	size_t len;

	// ����str1��str3
	strcpy_s(str3,  sizeof(str3), str1); // char ��һ�ֽڵ����Բ�����һ��Ԫ�س���Ҳ����
	printf("strcpy(str3, str1): %s\n", str3);

	int size = sizeof(str3);
	printf("��С��%d\n", size);

	strcat_s(str1, sizeof(str1), str2);
	printf("strcat(str1, str2): %s\n", str1);

	len = strlen(str1);
	printf("strlen(str1): %zd\n", len); // ����'\0'?

	int n[] = { 0, 1, 2, 3, 4 };

	printf("%p\n", &n[0]);
	int m = &n[0] + 1;
	printf("%p\n", m);
	printf("%p\n", &n[1]); // ��һ��ĵ�ַ��1��Ϊ�ڶ���ĵ�ַ





	return 0;
}

