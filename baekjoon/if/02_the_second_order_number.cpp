/*
����
�� ���� A, B, C�� �־�����. �� ��, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �� ���� A, B, C�� �������� ���еǾ� �־�����. (1 �� A, B, C �� 100)

���
�� ��°�� ū ������ ����Ѵ�.
*/
#pragma warning(disable:4996)
#include <stdio.h>
int main(int argc, char* argv[])
{
	int iA = 101, iB = 101, iC = 101;
	while ((iA < 1 || iA > 100) || (iB < 1 || iB > 100) || (iC < 1 || iC > 100))
		scanf("%d %d %d", &iA, &iB, &iC);
	if ((iB <= iA && iC >= iA) || (iC <= iA && iB >= iA))
		printf("%d\n", iA);
	else if((iA <= iB && iC >= iB) || (iC <= iB && iA >= iB))
		printf("%d\n", iB);
	else
		printf("%d\n", iC);
	return 0;
}