/*
����
�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. �ϴ� �����̴� �ڱ� ���� �߿� �ִ밪�� �����. 
�� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.
���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.
�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �� ������ ���� N�� �־�����. �� ���� 1000���� �۰ų� ����. ��° �ٿ� �������� ���� ������ �־�����. 
�� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.

���
ù° �ٿ� ���ο� ����� ����Ѵ�. ������� ����/��� ������ 10-2���� ����Ѵ�.
*/
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int iN = 1001, i = 0;
	int *arrGrade;
	int iSuccess = 0, iTemp = 0;
	float fAver = 0;
	while (iN > 1000)
		scanf("%d", &iN);
	arrGrade = (int*)calloc(iN, sizeof(int));
	while (iSuccess == 0){
		for (i = 0; i < iN; i++)
			scanf("%d", &arrGrade[i]);
		for (i = 0; i < iN; i++) {
			if (arrGrade[i] > 100 || arrGrade[i] < 0) {
				iSuccess = 0;
				break;
			}
			else
				iSuccess = 1;
		}
		if (iSuccess == 1) {
			for (i = 0; i < iN; i++) {
				if (arrGrade[i] >= iTemp)
					iTemp = arrGrade[i];
			}
		}
	}
	for (i = 0; i < iN; i++)
		fAver = fAver + (float)arrGrade[i]/iTemp*100 ;
	printf("%.2f\n", fAver / iN);
	return 0;
}