/*
����
���� N���� �̷���� ���� A�� ���� X�� �־�����. �� ��, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� X�� �־�����. (1 �� N, X �� 10,000)

��° �ٿ� ���� A�� �̷�� ���� N���� �־�����. �־����� ������ ��� 1���� ũ�ų� ����, 10,000���� �۰ų� ���� �����̴�.

���
X���� ���� ���� �Է¹��� ������� �������� ������ ����Ѵ�. X���� ���� ���� ��� �ϳ� �����Ѵ�.
*/
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int iN = -1, iX = 10001, i = 0;
	int iSuccess = 0;
	int *arrA;
	while (iN < 1 || iX > 10000)
		scanf("%d %d", &iN, &iX);
	arrA = (int*)calloc(iN, sizeof(int));
	memset(arrA, 1000, sizeof(int)*iN);
	while (iSuccess == 0) {
		for (i = 0; i < iN; i++)
			scanf("%d", &arrA[i]);
		for (i = 0; i < iN; i++) {
			if (arrA[i] < iX)
				iSuccess = 1;
		}
	}
	for (i = 0; i < iN; i++) {
		if (arrA[i] < iX)
			printf("%d ", arrA[i]);
	}printf("\n");
	return 0;
}