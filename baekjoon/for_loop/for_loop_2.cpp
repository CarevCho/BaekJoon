/*
-----
����
-----
�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

-----
�Է�
-----
ù° �ٿ� 100,000���� �۰ų� ���� �ڿ��� N�� �־�����.

-----
���
-----
ù° �ٺ��� N��° �� ���� ���ʴ�� ����Ѵ�.
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