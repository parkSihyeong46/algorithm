#include <iostream>
#include <vector>
#include <string>

using namespace std;

//����
//���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�.S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
//
//QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$ % *+-. / : �̴�.
//
//�Է�
//ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1, 000)�� �־�����.�� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), ���ڿ� S�� �������� ���еǾ� �־�����.S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.
//
//���
//�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.
//
//���� �Է�						���� ���
//2								AAABBBCCC
//3 ABC							/////HHHHHTTTTTPPPPP
//5 / HTP

// https://www.acmicpc.net/problem/2675

int main()
{
	int testCaseCount = 0;
	int loopCount = 0;
	string inputString;
	vector<int> loopCountVector;
	vector<string> inputStringVector;

	cin >> testCaseCount;

	for (int i = 0; i < testCaseCount; i++)
	{
		cin >> loopCount;
		loopCountVector.emplace_back(loopCount);
		cin >> inputString;
		inputStringVector.emplace_back(inputString);
	}

	for (int i = 0; i < (int)inputStringVector.size(); i++)
	{
		for (int j = 0; j < (int)inputStringVector[i].size(); j++)
		{
			for (int t = 0; t < (int)loopCountVector[i]; t++)
			{
				cout << inputStringVector[i][j];
			}
		}

		cout << endl;
	}

	return 0;
}