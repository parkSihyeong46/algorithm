#include <iostream>

using namespace std;

//����
//�߰��� 1�� �������� ������ ������� �ð�������� ȸ���ϸ� 1�� �����ϰ� �Ǵ� �׸�.
//���� �׸��� ���� ���������� �̷���� ������ �ִ�.�׸����� ���� �ٿ� ���� �߾��� �� 1���� �����ؼ� �̿��ϴ� �濡 ���ư��鼭 1�� �����ϴ� ��ȣ�� �ּҷ� �ű� �� �ִ�.���� N�� �־����� ��, ������ �߾� 1���� N�� ����� �ּ� ������ ���� ������ �� �� �� ���� ���� ����������(���۰� ���� �����Ͽ�)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.���� ���, 13������ 3��, 58������ 5���� ������.
//
//�Է�
//ù° �ٿ� N(1 �� N �� 1, 000, 000, 000)�� �־�����.
//
//���
//�Է����� �־��� ����� �ּ� ������ ���� ������ �� �� �� ���� ���� �������� ����Ѵ�.
//
//���� �Է�				���� ���
//13						3

// https://www.acmicpc.net/problem/2292

int main()
{
	int inputValue;
	int passingRoomCount = 0;
	int stepRange = 6;
	int sumValue = 0;

	cin >> inputValue;

	inputValue -= 1;

	do
	{
		sumValue += (stepRange * passingRoomCount);
		passingRoomCount++;
	} 
	while (inputValue > sumValue);
	
	cout << passingRoomCount;

	return 0;
}

// �ٸ� ���
//#include<iostream>
//int main() {
//	int n, k = 1;
//	std::cin >> n;
//	while (n > 1)n -= 6 * k++;
//	std::cout << k;
//}