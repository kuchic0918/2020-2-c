// file: address.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);
	printf("�Է� ��: %d\n", input);
	printf("�ּ� ��: %u(10����), %p(16����)\n", (int) &input, &input);
	printf("�ּ� ��: %d(10����), %#X(16����)\n", (unsigned) &input, (int) &input);
	printf("�ּ� �� ũ��: %d\n", sizeof(&input));

	return 0;
}
