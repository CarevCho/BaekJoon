/*
-----
문제
-----
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

-----
입력
-----
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

-----
출력
-----
첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::ios_base::sync_with_stdio(false);

	int iN = 100001;
	while (iN > 100000)
		cin >> iN;
	for (int i = 0; i < iN; i++)
		cout << iN - i << "\n";

	return 0;
}