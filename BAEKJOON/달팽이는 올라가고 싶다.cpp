#include <iostream>

using namespace std;

//문제
//땅 위에 달팽이가 있다.이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.
//달팽이는 낮에 A미터 올라갈 수 있다.하지만, 밤에 잠을 자는 동안 B미터 미끄러진다.또, 정상에 올라간 후에는 미끄러지지 않는다.
//달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 세 정수 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1, 000, 000, 000)
//
//출력
//첫째 줄에 달팽이가 나무 막대를 모두 올라가는데 며칠이 걸리는지 출력한다.
//
//예제 입력								예제 출력
//2 1 5									4
//5 1 6									2
//100 99 1000000000						999999901

// https://www.acmicpc.net/problem/2869

int main()
{
	int climbRange, fallRange, treeHeight;
	cin >> climbRange >> fallRange >> treeHeight;

	//int currentHeight = 0;
	//int daycount = 0;
	// 방법 1
	/*while (currentHeight < treeHeight)
	{
		daycount++;
		currentHeight += climbRange;
		if (currentHeight < treeHeight)
			currentHeight -= fallRange;
	}
	cout << daycount;*/

	// 방법 2
	/*while (treeHeight > (climbRange - fallRange) * daycount + fallRange)
	{
		daycount++;
	}
	cout << daycount;*/

	// 방법 3

	/*treeHeight <= (climbRange - fallRange) * day + fallRange;
	treeHeight - fallRange / (climbRange - fallRange) <= day;*/

	if((treeHeight - fallRange) % (climbRange - fallRange) == 0)
		cout << (treeHeight - fallRange) / (climbRange - fallRange);
	else
		cout << (treeHeight - fallRange) / (climbRange - fallRange) + 1;

	return 0;
}