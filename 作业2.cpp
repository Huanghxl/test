#include"stdio.h"
#include"pch.h"

int Ziduanhe(int n, int* str) {
    int sum = 0, max = 0, nf = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] < 0) { nf++; }
    }
    if (nf == n) {
        return max;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - i; j++) {
            sum += str[j];
            if (sum > max) {
                max = sum;
            }
        }
        sum = 0;
    }
    return max;
}
int main() {
    int n, sum = 0, max = 0, nf = 0;
    printf("����������������\n");
    scanf("%d", &n);
    printf("����������%d���������Կո�ָ�����\n", n);
    int* str = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &str[i]);
    }
    max = Ziduanhe(n, str);
    printf("����Ӷκͣ�\n%d\n", max);
    return 0;
}