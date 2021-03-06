// sugar_delivery.cpp : Defines the entry point for the console application.
//
/*
-----
문제
-----
상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.
상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.
-----
입력
-----
첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)
-----
출력
-----
상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

*/

#include "stdafx.h"
#include <iostream>
#include <limits.h>

using namespace std;

int main(int argc, char* argv[])
{
	int iN = 0;
	while (3 > iN || iN > 5000)	
		cin >> iN;
	
	/*
	"/" is quotient
	"%" is remainder
	*/
	if (iN / 5 != 0) {
		// N is above 5
		// check all the possible case of dividing 5 and 3.
		int iNum = iN / 5;
		int iBag = numeric_limits<int>::max();	// recomend set to large number.
		for (int i = 0, j = 0; i < iNum + 1; i++) {
			if ((iN - i * 5) % 3 == 0) {
				if (iBag > i + (iN - i * 5) / 3)
					iBag = i + (iN - i * 5) / 3;
				else
					continue;
			}
		}
		if (iBag == numeric_limits<int>::max())
		{
			cout << -1 << endl;
			return 0;
		}
		else {
			cout << iBag << endl;
			return 0;
		}
	}
	else {
		// N is under 5
		if (iN % 3 != 0) {
			// the remainder is not 0 when iN become under 5
			cout << -1 << endl;
			return 0;
		}
		else {
			// only in the case when N becomes 3
			cout << iN / 3 << endl;
			return 0;
		}
	}

    return 0;
}

