#include <iostream>
#include <cmath>

using namespace std;

//문제
//M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1, 000, 000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.
//
//출력
//한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
//
//예제 입력 1
//3 16
//예제 출력 1
//3
//5
//7
//11
//13

// https://www.acmicpc.net/problem/1929

int main()
{
	int inputValue1, inputValue2;
	bool* prime;

	cin >> inputValue1 >> inputValue2;
	prime = new bool[inputValue2 + 1];
	fill_n(prime, inputValue2 + 1, 1);

	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i <= sqrt(inputValue2); i++)
	{
		if (prime[i])
			for (int j = i * 2; j <= inputValue2; j += i)
				prime[j] = false;
	}

	for (int i = inputValue1; i <= inputValue2; i++)
	{
		if (prime[i])
			cout << i << "\n";
	}

	return 0;
}

// 에라토스테네스의 체를 이용해야만 제한시간 내에 풀어낼 수 있는 문제