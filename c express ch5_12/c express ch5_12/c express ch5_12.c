#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	char b;
	char c;
	char d;
	unsigned int result;

	/* PREOBLEM
	   문자형 "%c"는 자동으로 \n이 들어가기에(자동으로 버퍼에 ENTER키 저장) error
       SOL -> "% c"
	*/
	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &a);
	result = a;

	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &b);
	result = b << 8 | result;

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &c);
	result = c << 16 | result;

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &d);
	result = d << 24 | result;

	printf("결과 값: %x\n", result);
	return 0;
}