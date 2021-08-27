#include <iostream>
#include <vector>
#include <string>

using namespace std;

//문제
//예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다.따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.
//
//크로아티아 알파벳			변경
//č						c=
//ć						c-
//dž						dz=
//đ						d-
//lj						lj
//nj						nj
//š						s=
//ž						z=
//
//예를 들어, ljes = njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다.단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
//dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다.lj와 nj도 마찬가지이다.위 목록에 없는 알파벳은 한 글자씩 센다.
//
//입력
//첫째 줄에 최대 100글자의 단어가 주어진다.알파벳 소문자와 '-', '='로만 이루어져 있다.
//단어는 크로아티아 알파벳으로 이루어져 있다.문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.
//
//출력
//입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
//
//예제 입력						예제 출력
//ljes=njak						6
//ddz=z=							3
//nljj							3
//c=c=							2
//dz=ak							3

int main()
{
	string inputString;
	vector<bool> compareValue;
	string compareString;
	vector<string> croatiaAlphabet = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int alphabetCount = 0;

	cin >> inputString;
	for (int i = 0; i < (int)inputString.size(); i++)
		compareValue.emplace_back(false);

	for (int i = 0; i < (int)inputString.size(); i++)
	{
		for (int j = 0; j < (int)croatiaAlphabet.size(); j++)
		{
			if (compareValue[i] == true)
				break;

			if (inputString.size() < i + croatiaAlphabet[j].size())
				continue;

			compareString = inputString.substr(i, croatiaAlphabet[j].size());
			if (compareString == croatiaAlphabet[j])
			{
				for (int t = 0; t < (int)croatiaAlphabet[j].size(); t++)
				{
					compareValue[i + t] = true;
				}

				alphabetCount++;
			}
		}
	}

	for (int i = 0; i < (int)compareValue.size(); i++)
	{
		if (compareValue[i] == false)
		{
			alphabetCount++;
		}
	}

	cout << alphabetCount;

	return 0;
}

// 다른 방법

//#include<iostream>
//using namespace std;
//int main() {
//	string s, c[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
//	cin >> s;
//	for (string i : c) {
//		while (int(s.find(i)) != -1) {
//			s.replace(s.find(i), i.length(), "0");
//		}
//	}
//	cout << s.length();
//}