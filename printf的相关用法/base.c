#include <stdio.h>
int main(void)
{
	int ch;
	
	for (ch = 75; ch <= 100; ch++ ) {      // for ѭ����ʹ�ã�
		printf("ASCII ֵ = %d, �ַ� = %c\n", ch, ch); //ASCII������Ϣ������׼���� 
		//һ�ֱ��뷽ʽ�����ı�ת��Ϊ��ֵ�ź�

	}


	char dh = 'A';
	char str[20] = "www.runoob.com"; //�ַ����ĳ��������20λ ����ĸ���Ҫ��⣿
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("�ַ�Ϊ %c\n", dh);
	printf("�ַ���Ϊ %s\n", str);
	printf("������Ϊ %f\n", flt);
	printf("����Ϊ %d\n", no);
	printf("˫����ֵΪ %f\n", dbl); //���ȸ�һ�㣬С������λ����һ��
	printf("�˽���ֵΪ %o \n", no);
	printf("ʮ������Ϊ %x \n", no);
	/*
	%u ʮ�����޷�������  ���� �޷��ž���û�������� �з��ž����������ţ�����ͨ������ʡ��
	unsigned ��ʾ�޷���
	%p ָ���ֵ
	%e ָ����ʽ�ĸ�����
	%lu 32λ�޷������� 
	%llu 64λ�޷�������
	%p �����ַ��
	
	*/
	return 0;

	//����Ĳ���̳��ϻ��в���


}