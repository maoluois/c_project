#include <stdio.h>
#include <string.h>
#include <math.h>
#include <float.h>

float avg_array(float *a, int n) {
    float sum = 0;
    float *p;
    for (p = a; p < a + n; p ++) {
        sum += *p;
    }
    return sum / n;
}

void sort_array(float *a, int n) {
    float *p, *q, tmp;
    for (p = a; p < a + n; p ++) {
        for (q = a; q < a + n - (p - a) - 1; q ++) {
            if (*q > *(q + 1)) {
                tmp = *q; 
                *q = *(q + 1);
                *(q + 1) = tmp;
            }
        }
    }
}

float min_2_array(float a[10][10], int n_row, int n_col) {
    int i ,j;
    float min_val = FLT_MAX;
    for (i = 0; i < n_row; i ++) {
        for (j = 0; j < n_col; j ++) {
            if (*(*(a + i) + j) < min_val) {
                min_val = *(*(a + i) + j); 
            }
        }
    }
    
    return min_val;
}

int main() {
    float a[10], b[10][10];
    float *p;
    int n, r, c;

   
    printf("������һά������Ԫ�صĸ���\n");
    scanf("%d", &n);
    printf("���Ը�һ���ո����ʽ��������Ҫ��һά���� e.g(1 2 3)\n");
    for (p = a; p < a + n; p ++) {
        scanf("%f", p);
    }

    
    printf("��С������������Ϊ: ");
    sort_array(a, n);
    for (p = a; p < a + n; p ++) {
        printf("%f ", *p);
    }
    printf("\nƽ��ֵΪ: %f\n", avg_array(a, n));

    
    printf("�������Ķ�ά��������������� e.g(3 3)\n");
    scanf("%d %d", &r, &c);
    printf("���Ը�һ���ո�ͻ��е���ʽ��������Ҫ�Ķ�ά���� e.g(1 2 3\n4 5 6)\n");
    for (int i = 0; i < r; i ++) {
        for (int j = 0; j < c; j ++) {
            scanf("%f", &b[i][j]);
           // printf("%p\n", &b[i][j]);
        }
    }
    printf("��ά��������СֵΪ: %f\n", min_2_array(b, r, c));

    return 0;
}
