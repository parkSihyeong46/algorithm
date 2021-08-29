#include <iostream>

using namespace std;

//����
//�� ���� �����̰� �ִ�.�� �����̴� ���̰� V������ ���� ���븦 �ö� ���̴�.
//�����̴� ���� A���� �ö� �� �ִ�.������, �㿡 ���� �ڴ� ���� B���� �̲�������.��, ���� �ö� �Ŀ��� �̲������� �ʴ´�.
//�����̰� ���� ���븦 ��� �ö󰡷���, ��ĥ�� �ɸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �� ���� A, B, V�� �������� ���еǾ �־�����. (1 �� B < A �� V �� 1, 000, 000, 000)
//
//���
//ù° �ٿ� �����̰� ���� ���븦 ��� �ö󰡴µ� ��ĥ�� �ɸ����� ����Ѵ�.
//
//���� �Է�								���� ���
//2 1 5									4
//5 1 6									2
//100 99 1000000000						999999901

// https://www.acmicpc.net/problem/2869

int main()
{
	int climbRange, fallRange, treeHeight;
	cin >> climbRange >> fallRange >> treeHeight;

	//int currentHeight = 0;
	//int daycount = 0;
	// ��� 1
	/*while (currentHeight < treeHeight)
	{
		daycount++;
		currentHeight += climbRange;
		if (currentHeight < treeHeight)
			currentHeight -= fallRange;
	}
	cout << daycount;*/

	// ��� 2
	/*while (treeHeight > (climbRange - fallRange) * daycount + fallRange)
	{
		daycount++;
	}
	cout << daycount;*/

	// ��� 3

	/*treeHeight <= (climbRange - fallRange) * day + fallRange;
	treeHeight - fallRange / (climbRange - fallRange) <= day;*/

	if((treeHeight - fallRange) % (climbRange - fallRange) == 0)
		cout << (treeHeight - fallRange) / (climbRange - fallRange);
	else
		cout << (treeHeight - fallRange) / (climbRange - fallRange) + 1;

	return 0;
}