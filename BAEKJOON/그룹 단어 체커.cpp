#include <iostream>
#include <string>
#include <vector>

using namespace std;

//����
//�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
//�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �ܾ��� ���� N�� ���´�.N�� 100���� �۰ų� ���� �ڿ����̴�.��° �ٺ��� N���� �ٿ� �ܾ ���´�.�ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.
//
//���
//ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.
//
//���� �Է�					���� ���
//3							3
//happy
//new
//year
//
//4							1
//aba
//abab
//abcabc
//a

// https://www.acmicpc.net/problem/1316

//int main()
//{
//	int wordCount = 0;
//	vector<string> word;
//	vector<char> usedAlphabet;
//	char usingAlphabet = 0;
//	int groupWordCount = 0;
//	bool escape = false;
//
//	cin >> wordCount;
//
//	for (int i = 0; i < wordCount; i++)
//	{
//		word.emplace_back();
//		cin >> word[i];
//	}
//
//	for (int i = 0; i < (int)word.size(); i++)
//	{
//		usedAlphabet.clear();
//		usingAlphabet = 0;
//
//		for (int j = 0; j < (int)word[i].size(); j++)
//		{
//			escape = false;
//
//			if (usingAlphabet != word[i][j])
//			{
//				for (int t = 0; t < (int)usedAlphabet.size(); t++)
//				{
//					if (word[i][j] == usedAlphabet[t])
//					{
//						escape = true;
//						break;
//					}
//				}
//
//				if (escape)
//					break;
//
//				usingAlphabet = word[i][j];
//				usedAlphabet.emplace_back(usingAlphabet);
//			}
//
//			if (usingAlphabet == 0)
//			{
//				usingAlphabet = word[i][j];
//				usedAlphabet.emplace_back(usingAlphabet);
//				continue;
//			}
//
//			if (j == (int)word[i].size() - 1)
//				groupWordCount++;
//		}
//	}
//
//	cout << groupWordCount;
//
//	return 0;
//}

// �ٸ� ���

//#include <iostream>
//#include <algorithm>
//
//int main() {
//	int n, r = 0;
//	string s;
//	cin >> n;
//	for (; n--; ) {
//		cin >> s;
//
//		cout << s << endl;
//		s.resize(unique(s.begin(), s.end()) - s.begin());
//		sort(s.begin(), s.end());
//		r += (unique(s.begin(), s.end()) == s.end());
//	}
//	printf("%d\n", r);
//}