/*
����
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �ڿ����̴�.

���
���� ������ ����Ѵ�.
*/

#include <iostream>

int main(int argc, char* argv[])
{
	int iResult = 101;
	while (iResult < 0 || iResult > 100)
		std::cin >> iResult;
	if (iResult >= 90 && iResult <= 100)
		std::cout << "A\n";
	else if (iResult >= 80 && iResult <= 89)
		std::cout << "B\n";
	else if (iResult >= 70 && iResult <= 79)
		std::cout << "C\n";
	else if (iResult >= 60 && iResult <= 69)
		std::cout << "D\n";
	else
		std::cout << "F\n";
	return 0;
}