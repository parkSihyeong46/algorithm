﻿#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//문제
//영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다.이 문자열에는 몇 개의 단어가 있을까 ? 이를 구하는 프로그램을 작성하시오.단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
//
//입력
//첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다.이 문자열의 길이는 1, 000, 000을 넘지 않는다.단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다.또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.
//
//출력
//첫째 줄에 단어의 개수를 출력한다.
//
//예제 입력										예제 출력
//The Curious Case of Benjamin Button				6
//Mazatneunde Wae Teullyeoyo						3
//Teullinika Teullyeotzi							2
		

// https://www.acmicpc.net/problem/1152

int main()
{
	string inputString;
	istringstream iss;

	int count = 0;
	string token;

	getline(cin, inputString);

	// string trim
	inputString.erase(0, inputString.find_first_not_of(' '));
	inputString.erase(inputString.find_last_not_of(' ') + 1);

	iss.str(inputString); // istringstream iss(inputString) 으로 바로 값 초기화 가능

	while(getline(iss, token, ' '))
	{
		count++;
	}

	cout << count;

	return 0;
}