#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a;
    int b;
    printf("x, y 좌표를 입력하세요: ");
    scanf("%d %d", &a, &b);

    (a > 0 && b > 0) ? printf("1사분면") : printf("");
    (a < 0 && b > 0) ? printf("2사분면") : printf("");
    (a < 0 && b < 0) ? printf("3사분면") : printf("");
    (a > 0 && b < 0) ? printf("4사분면") : printf("");
}