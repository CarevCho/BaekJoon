/*
문제
세 정수 A, B, C가 주어진다. 이 때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)

출력
두 번째로 큰 정수를 출력한다.
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