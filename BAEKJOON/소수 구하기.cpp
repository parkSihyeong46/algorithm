#include <iostream>
#include <cmath>

using namespace std;

//����
//M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �ڿ��� M�� N�� �� ĭ�� ���̿� �ΰ� �־�����. (1 �� M �� N �� 1, 000, 000) M�̻� N������ �Ҽ��� �ϳ� �̻� �ִ� �Է¸� �־�����.
//
//���
//�� �ٿ� �ϳ���, �����ϴ� ������� �Ҽ��� ����Ѵ�.
//
//���� �Է� 1
//3 16
//���� ��� 1
//3
//5
//7
//11
//13

// https://www.acmicpc.net/problem/1929

int main()
{
	int inputValue1, inputValue2;
	bool* prime;

	cin >> inputValue1 >> inputValue2;
	prime = new bool[inputValue2 + 1];
	fill_n(prime, inputValue2 + 1, 1);

	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= sqrt(inputValue2); i++)
	{
		if (prime[i])
			for (int j = i * 2; j <= inputValue2; j += i)
				prime[j] = false;
	}

	for (int i = inputValue1; i <= inputValue2; i++)
	{
		if (prime[i])
			cout << i << "\n";
	}

	return 0;
}

// �����佺�׳׽��� ü�� �̿��ؾ߸� ���ѽð� ���� Ǯ� �� �ִ� ����