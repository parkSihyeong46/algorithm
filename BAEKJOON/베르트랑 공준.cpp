#include <iostream>
#include <cmath>

using namespace std;

//����
//����Ʈ�� ������ ������ �ڿ��� n�� ���Ͽ�, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ��� �ϳ� �����Ѵٴ� ������ ��� �ִ�.
//�� ������ ������ ����Ʈ���� 1845�⿡ �����߰�, ������Ƽ ü������� 1850�⿡ �����ߴ�.
//���� ���, 10���� ũ��, 20���� �۰ų� ���� �Ҽ��� 4���� �ִ�. (11, 13, 17, 19) ��, 14���� ũ��, 28���� �۰ų� ���� �Ҽ��� 3���� �ִ�. (17, 19, 23)
//�ڿ��� n�� �־����� ��, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.�� ���̽��� n�� �����ϴ� �� �ٷ� �̷���� �ִ�.
//�Է��� ���������� 0�� �־�����.
//
//���
//�� �׽�Ʈ ���̽��� ���ؼ�, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ����Ѵ�.
//
//���� �Է� 1
//1
//10
//13
//100
//1000
//10000
//100000
//0
//���� ��� 1
//1
//4
//3
//21
//135
//1033
//8392

// https://www.acmicpc.net/problem/4948

int main()
{
	int inputValue;
	bool* decimal = nullptr;
	int count = 0;

	while (1)
	{
		if (decimal != nullptr)
			delete[] decimal;

		count = 0;

		cin >> inputValue;
		if (inputValue == 0)
			return 0;

		decimal = new bool[2 * inputValue + 1];
		fill_n(decimal, 2 * inputValue + 1, 1);

		decimal[0] = false;
		decimal[1] = false;

		for (int i = 2; i <= sqrt(2 * inputValue); i++)
		{
			if (decimal)
			{
				for (int j = i * 2; j <= (2 * inputValue); j += i)
				{
					decimal[j] = false;
				}
			}
		}

		for (int i = inputValue+1; i <= (2 *inputValue); i++)
		{
			if (decimal[i])
				count++;
		}

		cout << count << "\n";
	}

	return 0;
}