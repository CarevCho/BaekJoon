/*
����
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

�Է�
ù° �ٿ��� �׽�Ʈ���̽��� ���� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. 
������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��°�ڸ����� ����Ѵ�.
*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int iC = 0, iStudent = 0, i = 0, j = 0;
	int *arrGrade;
	float *arrAver;
	scanf("%d", &iC);
	arrAver = (float*)calloc(iC, sizeof(float));
	for (i = 0; i < iC; i++) {
		while(iStudent < 1 || iStudent > 1000)
			scanf("%d", &iStudent);
		arrGrade = (int*)calloc(iStudent, sizeof(int));
		for (j = 0; j < iStudent; j++) {
			scanf("%d", &arrGrade[j]);
			arrAver[i] += arrGrade[j];
		}arrAver[i] /= iStudent;
		int iCount = 0;
		for (j = 0; j < iStudent; j++) {
			if (arrAver[i] < arrGrade[j])
				iCount++;
		}arrAver[i] = (float)iCount / iStudent * 100;
		free(arrGrade);
	}
	for (i = 0; i < iC; i++)
		printf("%.3f%%\n", arrAver[i]);
	return 0;
}