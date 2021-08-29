#include <iostream>

using namespace std;

//����
//����̴� ���� �������忡�� ������ ����ϰ� �ִ�.����̴� ���� �������Կ� ������ ��Ȯ�ϰ� Nų�α׷��� ����ؾ� �Ѵ�.�������忡�� ����� ������ ������ ����� �ִ�.������ 3ų�α׷� ������ 5ų�α׷� ������ �ִ�.
//����̴� ������ ������, �ִ��� ���� ������ ��� ������ �Ѵ�.���� ���, 18ų�α׷� ������ ����ؾ� �� ��, 3ų�α׷� ���� 6���� �������� ������, 5ų�α׷� 3���� 3ų�α׷� 1���� ����ϸ�, �� ���� ������ ������ ����� �� �ִ�.
//����̰� ������ ��Ȯ�ϰ� Nų�α׷� ����ؾ� �� ��, ���� �� ���� �������� �Ǵ��� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� N�� �־�����. (3 �� N �� 5000)
//
//���
//����̰� ����ϴ� ������ �ּ� ������ ����Ѵ�.����, ��Ȯ�ϰ� Nų�α׷��� ���� �� ���ٸ� - 1�� ����Ѵ�.
//
//���� �Է�					���� ���
//18							4
//4							- 1
//6							2
//9							3
//11							3

// https://www.acmicpc.net/problem/2839

int main()
{
	int sugarKg;
	const int plasticBag3kg = 3;
	const int plasticBag5kg = 5;
	int divFive = 0;
	int divThree = 0;

	cin >> sugarKg;

	divFive = sugarKg / plasticBag5kg;

	while (1)
	{
		if (divFive < 0)
		{
			cout << -1;
			return 0;
		}
			
		if ((sugarKg - (plasticBag5kg * divFive)) % plasticBag3kg == 0)
		{
			divThree = (sugarKg - (plasticBag5kg * divFive)) / plasticBag3kg;
			break;
		}

		divFive--;
	}

	cout << divFive + divThree;

	return 0;
}