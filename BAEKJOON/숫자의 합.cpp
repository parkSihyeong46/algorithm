#include <iostream>

using namespace std;

//����
//N���� ���ڰ� ���� ���� �����ִ�.�� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����.��° �ٿ� ���� N���� ������� �־�����.
//
//���
//�Է����� �־��� ���� N���� ���� ����Ѵ�.
//
//���� �Է�                       ���� ���
//1                               1
//1
//
//5                               15
//54321
//
//25                              7
//7000000000000000000000000
//
//11                              46
//10987654321

// https://www.acmicpc.net/problem/11720

int main()
{
    int digit, sum = 0;
    cin >> digit;

    char* value = new char[digit+1];    // ���� ���� �Է¹ޱ� ������ +1 ����� ��.;;
    cin >> value;

    for (int i = 0; i < digit; i++)
        sum += value[i] - '0';
        
    cout << sum;

    delete[] value;

    return 0;
}