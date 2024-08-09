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

   
    printf("请输入一维数组中元素的个数\n");
    scanf("%d", &n);
    printf("请以隔一个空格的形式输入您想要的一维数组 e.g(1 2 3)\n");
    for (p = a; p < a + n; p ++) {
        scanf("%f", p);
    }

    
    printf("从小到大排序后输出为: ");
    sort_array(a, n);
    for (p = a; p < a + n; p ++) {
        printf("%f ", *p);
    }
    printf("\n平均值为: %f\n", avg_array(a, n));

    
    printf("输入您的二维数组的行数和列数 e.g(3 3)\n");
    scanf("%d %d", &r, &c);
    printf("请以隔一个空格和换行的形式输入您想要的二维数组 e.g(1 2 3\n4 5 6)\n");
    for (int i = 0; i < r; i ++) {
        for (int j = 0; j < c; j ++) {
            scanf("%f", &b[i][j]);
           // printf("%p\n", &b[i][j]);
        }
    }
    printf("二维数组中最小值为: %f\n", min_2_array(b, r, c));

    return 0;
}
