#include <stdio.h>

// �����ⶨ�� x �� y ������������ļ��п���ʹ������������
int x;
int y;
int addtwonum()        // ���庯��ûд�����ʽ��ʱ���� ;
{
	// �������������� x �� y Ϊ�ⲿ����
	extern int x;
	extern int y;

	x = 1;
	y = 2;

	return x + y;

}


	

int main()      
{
	int result;
	// ���ú��� addtwonum()
	result = addtwonum();

	printf("result Ϊ��%d", result);


	return (0);



}
