#include <iostream>
#include <string>

using namespace std;

//����
//���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.
//
//�Է�
//ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����.�־����� �ܾ��� ���̴� 1, 000, 000�� ���� �ʴ´�.
//
//���
//ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�.��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ? �� ����Ѵ�.
//
//���� �Է�				���� ���
//Mississipi				 ?
//zZa						 Z
//z						 Z
//baaa					 A

// https://www.acmicpc.net/problem/1157

int main()
{
	string inputString;
	int alphabet[26] = { 0 };
	int max = 0;
	int index = 0;
	bool checkSame = false;

	cin >> inputString;

	for (int i = 0; i < (int)inputString.size(); i++)
	{
		if (inputString[i] >= 'a')
		{
			alphabet[inputString[i] - 'a']++;
		}
		else
		{
			alphabet[inputString[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			checkSame = false;
			max = alphabet[i];
			index = i;
		}
		else if (max == alphabet[i])
		{
			checkSame = true;
		}
	}

	if (checkSame)
		cout << "?";
	else
	{
		cout << (char)(index + 'A');
	}

	return 0;
}