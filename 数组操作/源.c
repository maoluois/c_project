#include <stdio.h>

// ����һ������
double balance[10]; //һ������Ϊdouble �� ���� 10��Ԫ�ص�����balance
// ��ʼ������
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

int i, j;

int n[10];





int main()
{
	// for (i = 0; i < 10; i++) {
		
		// printf("Element[%d] = %f\n", i, balance[i]); // ��������

	for (j = 0; j < 10; j++) {
		n[i] = i + 100;

	}
	
	int length = sizeof(n) / sizeof(n[0]); // size of���������ֽ�����

	printf("���鳤��Ϊ��%d\n", length);

	int* ptr = &n[0]; // ����ֱ��д�� int *ptr = n
	// nΪ������ͬʱҲ��ʾ����ĵ�ַ
	
	// ����ĵ�ַ�������һ��Ԫ�صĵ�ַ

	// �������������Զ�ת��Ϊָ��������Ԫ�ص�ָ��


}