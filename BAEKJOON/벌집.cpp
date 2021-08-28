#include <iostream>

using namespace std;

//문제
//중간에 1을 기준으로 육각형 모양으로 시계방향으로 회전하며 1씩 증가하게 되는 그림.
//위의 그림과 같이 육각형으로 이루어진 벌집이 있다.그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다.숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오.예를 들면, 13까지는 3개, 58까지는 5개를 지난다.
//
//입력
//첫째 줄에 N(1 ≤ N ≤ 1, 000, 000, 000)이 주어진다.
//
//출력
//입력으로 주어진 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나는지 출력한다.
//
//예제 입력				예제 출력
//13						3

// https://www.acmicpc.net/problem/2292

int main()
{
	int inputValue;
	int passingRoomCount = 0;
	int stepRange = 6;
	int sumValue = 0;

	cin >> inputValue;

	inputValue -= 1;

	do
	{
		sumValue += (stepRange * passingRoomCount);
		passingRoomCount++;
	} 
	while (inputValue > sumValue);
	
	cout << passingRoomCount;

	return 0;
}

// 다른 방법
//#include<iostream>
//int main() {
//	int n, k = 1;
//	std::cin >> n;
//	while (n > 1)n -= 6 * k++;
//	std::cout << k;
//}