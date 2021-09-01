#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";

    // 1단계
    for (int i = 0; i < new_id.size(); i++)
    {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z')
        {
            new_id[i] += 'a' - 'A';
        }
    }

    // 2단계
    for (int i = 0; i < new_id.size(); i++)
    {
        if (!(new_id[i] == '_' || new_id[i] == '-' || new_id[i] == '.' || (new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '1' && new_id[i] <= '9')))
        {
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }

    // 3단계
    for (int i = 0; i < new_id.size() - 1; i++)
    {
        if (new_id[i] == '.' && new_id[i + 1] == '.')
        {
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }

    // 4단계
    if (new_id[0] == '.')
        new_id.erase(new_id.begin());
    if (new_id.back() == '.')
        new_id.erase(new_id.end() - 1);

    // 5단계
    if (new_id.size() == 0)
        new_id.insert(0, "a");

    // 6단계
    if (new_id.size() >= 16)
    {
        new_id.erase(new_id.begin() + 15, new_id.end());
        if (new_id.back() == '.')
            new_id.erase(new_id.end() - 1);
    }

    // 7단계
    while (new_id.size() <= 2)
    {
        new_id.push_back(new_id.back());
    }

    answer = new_id;
    cout << answer;

    return answer;
}

int main()
{
    solution("abcdefghijklmn.p");

}