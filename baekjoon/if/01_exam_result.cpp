/*
문제
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 자연수이다.

출력
시험 성적을 출력한다.
*/

#include <iostream>

int main(int argc, char* argv[])
{
	int iResult = 101;
	while (iResult < 0 || iResult > 100)
		std::cin >> iResult;
	if (iResult >= 90 && iResult <= 100)
		std::cout << "A\n";
	else if (iResult >= 80 && iResult <= 89)
		std::cout << "B\n";
	else if (iResult >= 70 && iResult <= 79)
		std::cout << "C\n";
	else if (iResult >= 60 && iResult <= 69)
		std::cout << "D\n";
	else
		std::cout << "F\n";
	return 0;
}