/*
문제
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

입력
첫째 줄에 N (1<=N<=100)이 주어진다.

출력
첫째 줄부터 N번째 줄 까지 차례대로 별을 출력한다.
https://www.acmicpc.net/problem/2440
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[])
{
	int iN = 0;
	while (iN < 1 || iN > 100) {
		// input value sets to 1 to 100
		cin >> iN;
	}

	// print out asterisk
	for (int i = 0; i < iN; i++) {
		for (int j = 0; j < iN-i; j++) {	
			cout << "*";
		}cout << "\n";
	}

	return 0;
}
*/