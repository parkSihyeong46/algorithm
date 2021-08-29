#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//����
//�� ���� A�� B�� �Է¹��� ����, A + B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� A�� B�� �־�����. (0 < A, B < 1010000)
//
//���
//ù° �ٿ� A + B�� ����Ѵ�.
//
//���� �Է�										
//9223372036854775807 9223372036854775808
//
//���� ���
//18446744073709551615

// https://www.acmicpc.net/problem/10757

int main()
{
	string inputBigNumber1, inputBigNumber2;
	string result;
	bool isCarry = false;
	int temp = 0;

	cin >> inputBigNumber1 >> inputBigNumber2;

	result.resize(max(inputBigNumber1.size(), inputBigNumber2.size()), '0');

	for (int i = 0; i < result.size(); i++)
	{
		temp = isCarry;
		isCarry = false;

		if (i < (int)inputBigNumber1.size())
			temp += inputBigNumber1[inputBigNumber1.size() - 1 - i] - '0';
		if (i < (int)inputBigNumber2.size())
			temp += inputBigNumber2[inputBigNumber2.size() - 1 - i] - '0';

		if (temp > 9)
		{
			isCarry = true;
			temp -= 10;
		}

		result[result.size() -1 - i] = temp + '0';
	}

	if (isCarry)
		result.insert(result.begin(), '1');

	cout << result;

	return 0;
}