// file: twoarysample.c
#include <stdio.h>

int main()
{
	int abc[4][3] = {
		{ 1, 2, 3 },
		{ 5, 6, 7 },
		{ 9, 10, 11 },
		{ 13, 14, 15 }
	};
	int rowsize = sizeof(abc) / sizeof(abc[0]);
	int colsize = sizeof(abc[0]) / sizeof(abc[0][0]);

	printf("�� ���� ù �ּ� ���: \n");
	for (int i = 0; i < rowsize; i++)
		printf("%p ", abc[i]);
	printf("\n\n");

	printf("2�� ������ �ּҿ� �� ���: \n");
	int *p = abc[1];
	for (int i = 0; i < colsize; i++)
	{
		printf("%p ", p);
		printf("%d\n", *p++);
	}

	return 0;
}