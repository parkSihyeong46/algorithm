#include <iostream>

using namespace std;

//����
//�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù �ٿ� ���� ���� N�� �־�����.N�� 100�����̴�.�������� N���� ���� �־����µ� ���� 1, 000 ������ �ڿ����̴�.
//
//���
//�־��� ���� �� �Ҽ��� ������ ����Ѵ�.
//
//���� �Է�
//4
//1 3 5 7
//
//���� ���
//3

// https://www.acmicpc.net/problem/1978

bool FindDecimal(int input)
{
	if (input == 1)
		return false;

	for (int i = 2; i <= input / 2; i++)
	{
		if (input % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int inputValue;
	int inputNumber = 0;
	int result = 0;

	cin >> inputValue;

	for (int i = 0; i < inputValue; i++)
	{
		cin >> inputNumber;
		result += FindDecimal(inputNumber);
	}

	cout << result;

	return 0;
}

// �ٸ� Ǯ��
// �����佺�׳׽��� ü�� �̿�
// Ư���� ������ ������ ������ ����� ���θ� �����ϸ� �ִ� �ð��� �Ҽ��� ���� �� �ִ�.
// sqrt(inputNumber) ������ �˻��ϴ� ���̴�.
