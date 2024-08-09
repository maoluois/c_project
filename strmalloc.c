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
    char *string[3];  // ָ�����飬�����洢ÿ���ַ����ĵ�ַ

    // Ϊÿ���ַ��������ڴ棬����ȡ�ַ���
    while (n < 3) {
        string[n] = (char *)malloc(N * sizeof(char)); // malloc�ķ���ֵ��һ��(*void)���͵�ָ��
        if (fgets(string[n], N, stdin) != NULL) {
            // ȥ�����з�
            size_t len = strlen(string[n]);
            if (len > 0 && string[n][len - 1] == '\n') {
                string[n][len - 1] = '\0';
            }
            n ++;
        }
    }

    // ���ַ��������������
    sort_s(string, 3);

    // ����������ַ���
    for (int i = 0; i < 3; i++) {
        printf("%s\n", string[i]);
    }

    // �ͷŶ�̬������ڴ�
    for (int i = 0; i < 3; i++) {
        free(string[i]);
    }

    return 0;
}



void sort_s(char **p, int n)
{
    char *tmp;                 // ����һ����Ϊ�м������ָ��
    for (int i = 0; i < n; i ++) // ����ÿ��ָ�������ڵ�ָ��
    {
        for (int j = i + 1; j < n; j ++) // �ӵڶ�����ʼ���һ�����бȽ�
        {
            if (strcmp(p[i], p[j]) > 0) // �Ƚ������ַ�����ֵ�����ǰ��Ĵ��ں���ľͽ��н�����ʵ�ʽ�������ָ���ַ����ĵ�ַ��
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
