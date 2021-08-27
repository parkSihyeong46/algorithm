#include <iostream>

using namespace std;

//문제
//N개의 숫자가 공백 없이 쓰여있다.이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 숫자의 개수 N(1 ≤ N ≤ 100)이 주어진다.둘째 줄에 숫자 N개가 공백없이 주어진다.
//
//출력
//입력으로 주어진 숫자 N개의 합을 출력한다.
//
//예제 입력                       예제 출력
//1                               1
//1
//
//5                               15
//54321
//
//25                              7
//7000000000000000000000000
//
//11                              46
//10987654321

// https://www.acmicpc.net/problem/11720

int main()
{
    int digit, sum = 0;
    cin >> digit;

    char* value = new char[digit+1];    // 엔터 값도 입력받기 때문에 +1 해줘야 함.;;
    cin >> value;

    for (int i = 0; i < digit; i++)
        sum += value[i] - '0';
        
    cout << sum;

    delete[] value;

    return 0;
}