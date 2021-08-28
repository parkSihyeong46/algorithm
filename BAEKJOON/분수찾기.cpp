#include <iostream>

using namespace std;

//1  2  6  7  15 16 28 29 45 46
//3  5  8  14 17 27 30 44
//4  9  13 18 26 31 43
//10 12 19 25 32 42
//11 20 24 33 41
//21 23 34 40
//22 35 39
//36 38
//37

/*
1/1  1/2  1/3  1/4  1/5
2/1  2/2  2/3  2/4  2/5
3/1  3/2  3/3  3/4
4/1  4/2  4/3
5/1  5/2
6/1
*/

//����
//�̿� ���� ������ �м����� 1 / 1 �� 1 / 2 �� 2 / 1 �� 3 / 1 �� 2 / 2 �� �� �� ���� ������� ������ ���ʴ�� 1��, 2��, 3��, 4��, 5��, �� �м���� ����.
//X�� �־����� ��, X��° �м��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� X(1 �� X �� 10, 000, 000)�� �־�����.
//
//���
//ù° �ٿ� �м��� ����Ѵ�.
//		
//���� �Է�				���� ���
//1						1 / 1
//2						1 / 2
//3						2 / 1
//9						3 / 2
//14						2 / 4

// https://www.acmicpc.net/problem/1193

int main()
{
	int inputValue;

	bool isAddDenominator = true;
	int loopCount = 1;
	int currentMolecule = 1;	// ����
	int currentDenominator = 1;	// �и�

	cin >> inputValue;

	while (loopCount != inputValue)
	{
		if (isAddDenominator)
		{
			currentDenominator++;
			
			if (currentMolecule == 1)
				isAddDenominator = false;
			else
				currentMolecule--;
		}
		else
		{
			currentMolecule++;
			
			if (currentDenominator == 1)
				isAddDenominator = true;
			else
				currentDenominator--;
		}

		loopCount++;
	}

	cout << currentMolecule << "/" << currentDenominator;

	return 0;
}

// �ٸ� ���
//int main()
//{
//	int n, i = 1;
//	cin >> n;
//
//	while (n > i)
//	{
//		n -= i;
//		i++;
//	}
//
//	if (i % 2 == 0)
//	{
//		cout << n << "/" << i + 1 - n << endl;
//	}
//	else
//	{
//		cout << i + 1 - n << "/" << n << endl;
//	}
//
//	return 0;
//}