/*
문제
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

입력
첫째 줄에는 테스트케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 
점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

출력
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째자리까지 출력한다.
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