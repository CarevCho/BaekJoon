/*
����
N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.��� ���Ŀ� ���缭 ����ϸ� �ȴ�.

�Է�
ù° �ٿ� N�� �־�����.N�� 1���� ũ�ų� ����, 9���� �۰ų� ����.

���
������İ� ���� N * 1���� N * 9���� ����Ѵ�.
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[])
{
	int iN = 0;
	while (iN < 1 || iN > 9) {
		// input range sets to 1 to 9
		cin >> iN;
	}

	for (int i = 1; i < 10; i++) {
		// print out
		cout << iN << " * " << i << " = " << iN*i << "\n";
	}

	return 0;
}