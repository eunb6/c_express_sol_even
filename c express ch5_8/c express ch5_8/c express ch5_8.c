#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include <stdio.h>
#include <math.h>

int main(void) {
	float r;
	float surface;
	float volume;
	float mul;

	printf("구의 반지름을 입력하세요: ");
	scanf("%f", &r);

	surface = 4 * PI * r;
	mul = pow(r, 3);
	volume = (4 * PI * mul) / 3;
	//printf("%lf", mul);
	printf("표면적은 %f입니다\n", surface);
	printf("체적은 %f입니다\n", volume);

	return 0;
}