/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ �� (���� ����)�� ����Ͻÿ�.

�Է�
ù° �ٿ� N (1<=N<=100)�� �־�����.

���
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
https://www.acmicpc.net/problem/2439
*/
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
		for (int j = 0; j < iN; j++) {
			if(j < iN-i-1)
				cout << ' ';
			else
				cout << "*";
		}cout << "\n";
	}

	return 0;
}