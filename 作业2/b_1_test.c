/*
==============================================================================
File Name   :   b_1_test.c
Author      :   Le Chang
Student ID  :   00007468
Contact     :   lechang@gdut.edu.cn
Version     :   1.0
Copyright   :   N/A
Description :   This file is used to test the correctness of function
                    double calcPrice(int order_qua)
                in b_1.c
==============================================================================
*/
#include "b_1.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
	
    printf("Testing Assignment b_1.c!\n");
    /*
ĳ��Ʒ����90Ԫ�������������ۣ���׼���£�
10�׼�����		ԭ��
11~50��            9��
51�׼�����          8��
���⣬���Ҷ��������������300Ԫ���ۺ󣩼�40��
*/
    //Test 3
    printf("Buy  3 items, should pay %7.2f. | Your answer is %7.2f. ||\t",270.0,calcPrice(3));
    if(fabs(calcPrice(3)-270.0)<0.001)
        printf("CORRECT!\n");
    else
        printf("WRONG!\n");

    //Test 10
    printf("Buy 10 items, should pay %7.2f. | Your answer is %7.2f. ||\t",860.0,calcPrice(10));
        if(fabs(calcPrice(10)-860.0)<0.001)
        printf("CORRECT!\n");
    else
        printf("WRONG!\n");

    //Test 50
    printf("Buy 50 items, should pay %7.2f. | Your answer is %7.2f. ||\t",4010.0,calcPrice(50));
        if(fabs(calcPrice(50)-4010.0)<0.001)
        printf("CORRECT!\n");
    else
        printf("WRONG!\n");

    //Test 55
    printf("Buy 55 items, should pay %7.2f. | Your answer is %7.2f. ||\t",3920.0,calcPrice(55));
        if(fabs(calcPrice(55)-3920.0)<0.001)
        printf("CORRECT!\n");
    else
        printf("WRONG!\n");

    return 0;
}
