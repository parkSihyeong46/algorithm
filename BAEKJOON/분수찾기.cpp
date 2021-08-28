#include <iostream>

using namespace std;

//1  2  6  7  15 16 28 29 45 46
//3  5  8  14 17 27 30 44
//4  9  13 18 26 31 43
//10 12 19 25 32 42
//11 20 24 33 41
//21 23 34 40
//22 35 39
//36 38
//37

/*
1/1  1/2  1/3  1/4  1/5
2/1  2/2  2/3  2/4  2/5
3/1  3/2  3/3  3/4
4/1  4/2  4/3
5/1  5/2
6/1
*/

//문제
//이와 같이 나열된 분수들을 1 / 1 → 1 / 2 → 2 / 1 → 3 / 1 → 2 / 2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.
//X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 X(1 ≤ X ≤ 10, 000, 000)가 주어진다.
//
//출력
//첫째 줄에 분수를 출력한다.
//		
//예제 입력				예제 출력
//1						1 / 1
//2						1 / 2
//3						2 / 1
//9						3 / 2
//14						2 / 4

// https://www.acmicpc.net/problem/1193

int main()
{
	int inputValue;

	bool isAddDenominator = true;
	int loopCount = 1;
	int currentMolecule = 1;	// 분자
	int currentDenominator = 1;	// 분모

	cin >> inputValue;

	while (loopCount != inputValue)
	{
		if (isAddDenominator)
		{
			currentDenominator++;
			
			if (currentMolecule == 1)
				isAddDenominator = false;
			else
				currentMolecule--;
		}
		else
		{
			currentMolecule++;
			
			if (currentDenominator == 1)
				isAddDenominator = true;
			else
				currentDenominator--;
		}

		loopCount++;
	}

	cout << currentMolecule << "/" << currentDenominator;

	return 0;
}

// 다른 방법
//int main()
//{
//	int n, i = 1;
//	cin >> n;
//
//	while (n > i)
//	{
//		n -= i;
//		i++;
//	}
//
//	if (i % 2 == 0)
//	{
//		cout << n << "/" << i + 1 - n << endl;
//	}
//	else
//	{
//		cout << i + 1 - n << "/" << n << endl;
//	}
//
//	return 0;
//}