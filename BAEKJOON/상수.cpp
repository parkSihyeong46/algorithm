#include <iostream>
#include <string>

using namespace std;

//����
//������� ���� ����� ������ ���� ���Ѵ�.����� ���ڸ� �дµ� ������ �ִ�.�̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���.����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���.�� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.
//����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�.���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�.����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.
//�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����.�� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.
//
//���� �Է� 1						���� ��� 1
//734 893							437
//���� �Է� 2						���� ��� 2
//221 231							132
//���� �Է� 3						���� ��� 3
//839 237							938

// https://www.acmicpc.net/problem/2908

void printReverseString(string value)
{
	for (auto it = value.rbegin(); it != value.rend(); it++)
	{
		cout << *(it);
	}
}

int main()
{
	string hundredDigits[2];

	cin >> hundredDigits[0] >> hundredDigits[1];

	for (int i = (int)hundredDigits[0].size() - 1; i >= 0; i--)
	{
		if (hundredDigits[0][i] > hundredDigits[1][i])
		{
			printReverseString(hundredDigits[0]);
			break;
		}
		else if (hundredDigits[0][i] < hundredDigits[1][i])
		{
			printReverseString(hundredDigits[1]);
			break;
		}
	}

	return 0;
}