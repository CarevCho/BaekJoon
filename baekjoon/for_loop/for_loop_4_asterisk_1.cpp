/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

�Է�
ù° �ٿ� N (1<=N<=100)�� �־�����.

���
ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
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
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}cout << "\n";
	}

	return 0;
}