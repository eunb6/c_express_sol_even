#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	char b;
	char c;
	char d;
	unsigned int result;

	/* PREOBLEM
	   ������ "%c"�� �ڵ����� \n�� ���⿡(�ڵ����� ���ۿ� ENTERŰ ����) error
       SOL -> "% c"
	*/
	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &a);
	result = a;

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &b);
	result = b << 8 | result;

	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c);
	result = c << 16 | result;

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &d);
	result = d << 24 | result;

	printf("��� ��: %x\n", result);
	return 0;
}