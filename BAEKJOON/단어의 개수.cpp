#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//����
//���� ��ҹ��ڿ� ���⸸���� �̷���� ���ڿ��� �־�����.�� ���ڿ����� �� ���� �ܾ ������ ? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.
//
//�Է�
//ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ���ڿ��� �־�����.�� ���ڿ��� ���̴� 1, 000, 000�� ���� �ʴ´�.�ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����.���� ���ڿ��� �հ� �ڿ��� ������ ���� ���� �ִ�.
//
//���
//ù° �ٿ� �ܾ��� ������ ����Ѵ�.
//
//���� �Է�										���� ���
//The Curious Case of Benjamin Button				6
//Mazatneunde Wae Teullyeoyo						3
//Teullinika Teullyeotzi							2
		

// https://www.acmicpc.net/problem/1152

int main()
{
	string inputString;
	istringstream iss;

	int count = 0;
	string token;

	getline(cin, inputString);

	// string trim
	inputString.erase(0, inputString.find_first_not_of(' '));
	inputString.erase(inputString.find_last_not_of(' ') + 1);

	iss.str(inputString); // istringstream iss(inputString) ���� �ٷ� �� �ʱ�ȭ ����

	while(getline(iss, token, ' '))
	{
		count++;
	}

	cout << count;

	return 0;
}