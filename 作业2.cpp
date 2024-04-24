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
    printf("请输入整数个数：\n");
    scanf("%d", &n);
    printf("请依次输入%d个整数（以空格分隔）：\n", n);
    int* str = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &str[i]);
    }
    max = Ziduanhe(n, str);
    printf("最大子段和：\n%d\n", max);
    return 0;
}