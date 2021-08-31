#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//����
//�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
//���� ��� M = 60, N = 100�� ��� 60�̻� 100������ �ڿ��� �� �Ҽ��� 61, 67, 71, 73, 79, 83, 89, 97 �� 8���� �����Ƿ�, �̵� �Ҽ��� ���� 620�̰�, �ּڰ��� 61�� �ȴ�.
//
//�Է�
//�Է��� ù° �ٿ� M��, ��° �ٿ� N�� �־�����.
//M�� N�� 10, 000������ �ڿ����̸�, M�� N���� �۰ų� ����.
//
//���
//M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ����Ѵ�.
//��, M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� - 1�� ����Ѵ�.
//
//���� �Է� 1
//60
//100
//���� ��� 1
//620
//61
//���� �Է� 2
//64
//65
//���� ��� 2
//- 1

// https://www.acmicpc.net/problem/2581

bool FindDecimal(int number)
{
	if (number <= 1)
		return false;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int minNumber, maxNumber;
	vector<int> decimal;
	int sum = 0;

	cin >> minNumber >> maxNumber;

	for (int i = minNumber; i <= maxNumber; i++)
	{
		if (FindDecimal(i))
			decimal.emplace_back(i);
	}

	if (decimal.empty())
		cout << -1;
	else
	{
		for (auto i : decimal)
			sum += i;
		cout << sum << endl;
		cout << decimal[0];
	}
		
	return 0;
}