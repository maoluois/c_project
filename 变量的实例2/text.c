#include <stdio.h>

// ��������ȫ�ֱ���  ǰ��x �� y ����������û�����  
int x = 1;
int y = 2; 

int addtwonum(); // �����������������
int main(void)
{
	int result;
	result = addtwonum(); // ���� x �� y ���ú������  
	// �� x �� y�ں�����û��ʼ��
	
	// ��������һ���ļ���������Ȼ����main�ļ��ٳ�ʼ�� x �� y

	int j = x + y; // ʹ��ȫ�ֱ���
	printf("%d\n", j); 

	printf("result Ϊ: %d\n",result);
	
	
	return 0;


}