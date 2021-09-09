#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//문제
//정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 정수 N(1 ≤ N ≤ 10, 000, 000)이 주어진다.
//
//출력
//N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다.N이 1인 경우 아무것도 출력하지 않는다.
//
//예제 입력 1				예제 출력 1
//72						2
//							2
//							2
//							3
//							3
//
//예제 입력 2				예제 출력 2
//3							3
//
//예제 입력 3				예제 출력 3
//6							2
//							3
//
//예제 입력 4				예제 출력 4
//2							2
//
//예제 입력 5				예제 출력 5
//9991						97
//							103

// https://www.acmicpc.net/problem/11653

int main()
{
	vector<int> findNumber;
	int inputValue;
	int loopCount = 0;
	cin >> inputValue;

	if (inputValue == 1)
		return 0;

	loopCount = inputValue / 2;
	for (int i = 2; i <= loopCount; i++)
	{
		if (inputValue == 1)
			break;

		if (inputValue % i != 0)
			continue;

		findNumber.emplace_back(i);
		inputValue /= i;
		i = 1;
	}

	if (findNumber.empty())
		cout << inputValue;

	for (auto i : findNumber)
		cout << i << endl;

	return 0;
}