#include <iostream>
#include <vector>

using namespace std;

//����
//��� �ݻ�ȸ�� �����ϴ� ���� �����ϴ� ����� �̹� ��ȸ�� �γ�ȸ���� �ǰ� �;� �� ���� ������� �ҷ� ��� �ݻ�ȸ�� �����Ϸ��� �Ѵ�.
//�� ����Ʈ�� ���ָ� �Ϸ��� ������ �ִµ�, ��a���� bȣ�� ����� �ڽ��� �Ʒ�(a - 1)���� 1ȣ���� bȣ���� ������� ���� �ո�ŭ ������� ������ ��ƾ� �Ѵ١� �� ��� ������ �� ��Ű�� ���;� �Ѵ�.
//����Ʈ�� ����ִ� ���� ���� ��� ���ֹε��� �� ��� ������ ��Ű�� �Դٰ� �������� ��, �־����� ���� ���� k�� n�� ���� k���� nȣ���� �� ���� ��� �ִ��� ����϶�.��, ����Ʈ���� 0������ �ְ� �������� 1ȣ���� ������, 0���� iȣ���� i���� ���.
//
//�Է�
//ù ��° �ٿ� Test case�� �� T�� �־�����.�׸��� ������ ���̽����� �Է����� ù ��° �ٿ� ���� k, �� ��° �ٿ� ���� n�� �־�����
//
//���
//������ Test case�� ���ؼ� �ش� ���� ���ֹ� ���� ����϶�.
//
//���� �Է�							���� ���
//2									6
//1									10
//3
//2
//3

// https://www.acmicpc.net/problem/2775

void findSum(int& sum, int floor, int room)
{
	if (room == 1)
	{
		sum += 1;
		return;
	}

	if (floor == 1)
	{
		sum += (room * (room+1)) / 2;
		return;
	}

	int loopCount = room;
	for (int i = 0; i <= loopCount; i++)
	{
		findSum(sum, (floor - 1), room--);
	}
}

int main()
{
	int loopCount;
	vector<int> floor;
	vector<int> room;
	int sum = 0;

	cin >> loopCount;
	floor.resize(loopCount);
	room.resize(loopCount);

	for (int i = 0; i < loopCount; i++)
	{
		cin >> floor[i];
		cin >> room[i];
		sum = 0;

		findSum(sum, floor[i], room[i]);

		cout << sum << endl;
	}

	return 0;
}