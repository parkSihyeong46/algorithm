#include <iostream>
#include <map>
#include <string>

using namespace std;

//����
//���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� - 1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �ܾ� S�� �־�����.�ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
//
//���
//������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, ... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.
//
//����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� - 1�� ����Ѵ�.�ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.
//
//
//���� �Է�
//baekjoon
//
//���� ���
//1 0 - 1 - 1 2 - 1 - 1 - 1 - 1 4 3 - 1 - 1 7 5 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1

// https://www.acmicpc.net/problem/10809

int main()
{
    map<int, int> printValue;
    string inputWord;

    cin >> inputWord;

    for (int i = 'a'; i <= 'z'; i++)
    {
        printValue[i] = -1;
    }

    for (int i = 0; i < (int)inputWord.size(); i++)
    {
        if (printValue[inputWord[i]] != -1)
            continue;

        printValue[inputWord[i]] = i;
    }


    for (int i = 'a'; i <= 'z'; i++)
    {
        cout << printValue[i] << " ";
    }

    return 0;
}