/*
����
���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ���̰� N�� �ܾ �־�����.

�� �ٿ� 10���ھ� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ �־�����. �ܾ�� ���ĺ� �ҹ��ڿ� �빮�ڷθ� �̷���� ������, ���̴� 100�� ���� �ʴ´�. ���̰� 0�� �ܾ�� �־����� �ʴ´�.

���
�Է����� �־��� �ܾ �� ���� ��� �� �ٿ� �ϳ��� ����Ѵ�. �ܾ��� ���̰� 10�� ����� �ƴ� ��쿡�� ������ �ٿ��� 10�� �̸��� ���ڸ� ����� ���� �ִ�.
*/
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	std::string strFull = "";
	while (strFull.length() == 0 || strFull.length() > 100)
		std::cin >> strFull;

	int iNumOfLine;
	if (strFull.length() % 10 == 0)
		iNumOfLine = strFull.length() / 10;
	else
		iNumOfLine = strFull.length() / 10 + 1;
	for (int i = 0; i < iNumOfLine; i++) {
		if (i == iNumOfLine - 1) {
			if(strFull.length()%10 == 0)
				std::cout << strFull.substr(10 * i, 10) << "\n";
			else
				std::cout << strFull.substr(10 * i, strFull.length() % 10) << "\n";
		}
		else
			std::cout << strFull.substr(10 * i, 10) << "\n";
	}

	return 0;
}