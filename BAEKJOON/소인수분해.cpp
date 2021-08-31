#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//����
//���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ���� N(1 �� N �� 10, 000, 000)�� �־�����.
//
//���
//N�� ���μ����� ����� �� �ٿ� �ϳ��� ������������ ����Ѵ�.N�� 1�� ��� �ƹ��͵� ������� �ʴ´�.
//
//���� �Է� 1				���� ��� 1
//72						2
//							2
//							2
//							3
//							3
//
//���� �Է� 2				���� ��� 2
//3							3
//
//���� �Է� 3				���� ��� 3
//6							2
//							3
//
//���� �Է� 4				���� ��� 4
//2							2
//
//���� �Է� 5				���� ��� 5
//9991						97
//							103

// https://www.acmicpc.net/problem/11653

int main()
{
	vector<int> findNumber;
	int inputValue;
	int loopCount = 0;
	cin >> inputValue;

	if (inputValue == 1)
		return 0;

	loopCount = inputValue / 2;
	for (int i = 2; i <= loopCount; i++)
	{
		if (inputValue == 1)
			break;

		if (inputValue % i != 0)
			continue;

		findNumber.emplace_back(i);
		inputValue /= i;
		i = 1;
	}

	if (findNumber.empty())
		cout << inputValue;

	for (auto i : findNumber)
		cout << i << endl;

	return 0;
}