#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include <stdio.h>
#include <math.h>

int main(void) {
	float r;
	float surface;
	float volume;
	float mul;

	printf("���� �������� �Է��ϼ���: ");
	scanf("%f", &r);

	surface = 4 * PI * r;
	mul = pow(r, 3);
	volume = (4 * PI * mul) / 3;
	//printf("%lf", mul);
	printf("ǥ������ %f�Դϴ�\n", surface);
	printf("ü���� %f�Դϴ�\n", volume);

	return 0;
}