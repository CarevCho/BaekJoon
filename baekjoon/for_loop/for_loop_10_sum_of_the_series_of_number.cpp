/*
����
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

���
�Է����� �־��� ���� N���� ���� ����Ѵ�.
https://www.acmicpc.net/problem/11720
*/
#include <iostream>

int main(int argc, char* argv[])
{
	int iNum = 0;
	char *pStrNum;
	while (iNum < 1 || iNum > 100)
		std::cin >> iNum;
	pStrNum = new char[iNum];
	std::cin >> pStrNum;
	int iSum = 0;
	for (int i = 0; i < iNum; i++)
		iSum = iSum + (pStrNum[i] - '0');
	std::cout << iSum << "\n";

	return 0;
}