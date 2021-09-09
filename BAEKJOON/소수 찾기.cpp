#include <iostream>

using namespace std;

//문제
//주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
//
//입력
//첫 줄에 수의 개수 N이 주어진다.N은 100이하이다.다음으로 N개의 수가 주어지는데 수는 1, 000 이하의 자연수이다.
//
//출력
//주어진 수들 중 소수의 개수를 출력한다.
//
//예제 입력
//4
//1 3 5 7
//
//예제 출력
//3

// https://www.acmicpc.net/problem/1978

bool FindDecimal(int input)
{
	if (input == 1)
		return false;

	for (int i = 2; i <= input / 2; i++)
	{
		if (input % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int inputValue;
	int inputNumber = 0;
	int result = 0;

	cin >> inputValue;

	for (int i = 0; i < inputValue; i++)
	{
		cin >> inputNumber;
		result += FindDecimal(inputNumber);
	}

	cout << result;

	return 0;
}

// 다른 풀이
// 에라토스테네스의 체를 이용
// 특정한 숫자의 제곱근 까지만 약수의 여부를 검증하면 최단 시간에 소수를 구할 수 있다.
// sqrt(inputNumber) 까지만 검사하는 것이다.
