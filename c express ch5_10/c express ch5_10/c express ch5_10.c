#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a;
    int b;
    printf("x, y ��ǥ�� �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    (a > 0 && b > 0) ? printf("1��и�") : printf("");
    (a < 0 && b > 0) ? printf("2��и�") : printf("");
    (a < 0 && b < 0) ? printf("3��и�") : printf("");
    (a > 0 && b < 0) ? printf("4��и�") : printf("");
}