/*
����
������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����. ������ 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

���
ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.
*/
/*
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int arrMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	std::string arrDayOfWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int iMonth = 0, iDay = 0;
	int iNum = 0;
	std::cin >> iMonth >> iDay;
	for (int i = 0; i<iMonth - 1; i++)
		iNum += arrMonth[i];
	iNum += iDay;
	std::cout << arrDayOfWeek[iNum % 7] << "\n";

	return 0;
}
*/