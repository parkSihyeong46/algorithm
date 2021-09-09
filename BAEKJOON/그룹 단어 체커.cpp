#include <iostream>
#include <string>
#include <vector>

using namespace std;

//문제
//그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
//단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 단어의 개수 N이 들어온다.N은 100보다 작거나 같은 자연수이다.둘째 줄부터 N개의 줄에 단어가 들어온다.단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.
//
//출력
//첫째 줄에 그룹 단어의 개수를 출력한다.
//
//예제 입력					예제 출력
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

// 다른 방법

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