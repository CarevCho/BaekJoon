// for_loop.cpp : Defines the entry point for the console application.
//
/*
-----
문제
-----
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
-----
입력
-----
첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
-----
출력
-----
첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
*/
/*
#include "stdafx.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::ios_base::sync_with_stdio(false);	// if you want use "cin & cout", this function accelerate input&output speed. do not use "endl". because "endl" is soooooo slow... 
	int iN = 100001;
	while(iN > 100000)
		cin >> iN;
	for (int i = 0; i < iN; i++)
		cout << i+1 << "\n";

    return 0;
}
*/