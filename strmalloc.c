#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a, int b);
int min(int a, int b);
long long factorial(int n);
long long FBNQ(int n);
int Comb(int a, int b);
void sort(int *a, int len);
void sort_s(char **p, int n);

const int N = 2e5 + 10;
int a[10000 + 10];
int b[10][10];


int main() {
    int n = 0;
    char *string[3];  // 指针数组，用来存储每个字符串的地址

    // 为每个字符串分配内存，并读取字符串
    while (n < 3) {
        string[n] = (char *)malloc(N * sizeof(char)); // malloc的返回值是一个(*void)类型的指针
        if (fgets(string[n], N, stdin) != NULL) {
            // 去除换行符
            size_t len = strlen(string[n]);
            if (len > 0 && string[n][len - 1] == '\n') {
                string[n][len - 1] = '\0';
            }
            n ++;
        }
    }

    // 对字符串数组进行排序
    sort_s(string, 3);

    // 输出排序后的字符串
    for (int i = 0; i < 3; i++) {
        printf("%s\n", string[i]);
    }

    // 释放动态分配的内存
    for (int i = 0; i < 3; i++) {
        free(string[i]);
    }

    return 0;
}



void sort_s(char **p, int n)
{
    char *tmp;                 // 声明一个作为中间变量的指针
    for (int i = 0; i < n; i ++) // 遍历每个指针数组内的指针
    {
        for (int j = i + 1; j < n; j ++) // 从第二个开始与第一个进行比较
        {
            if (strcmp(p[i], p[j]) > 0) // 比较两个字符串的值，如果前面的大于后面的就进行交换（实际交换的是指向字符串的地址）
            {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

void sort(int *a, int len) {
    for (int i = 0; i < len; i ++) {
        for (int j = 0; j < len; j ++) {
            if (a[j] > a[j + 1]) {
                int tmp;
                a[j + 1] = tmp;
                a[j + 1] = a[j];
                a[j] = a[j + 1];
            }
        }
    }
}
   


int max(int a, int b) {
    return (a > b) ? a : b;
}


int min(int a, int b) {
    return (a < b) ? a : b;
}

long long factorial(int n) {
    if (n == 1 || n == 0) return 1;
    return n * factorial(n - 1);
}

long long FBNQ(int n) {
    if (n == 1 || n == 2) {
        a[n] = 1;
        return 1;
    }
    if (a[n]) return a[n];
    a[n] = FBNQ(n - 1) + FBNQ(n - 2);
    
    return a[n];
}

int Comb(int a, int b) {
    if (b == 0) return 1;
    return factorial(a) / (factorial(b) * factorial(a - b));
}
