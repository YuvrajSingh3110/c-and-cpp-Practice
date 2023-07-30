#include <bits/stdc++.h>
using namespace std;

void addChar(string &str, int pos)
{
    int cnt = 0;
    int i = 0;
    while (i < str.size() && cnt < pos)
    {
        if (str[i] != '$')
            cnt++;
        i++;
    }
    str.insert(i, "$");
}

bool isValid(string &str)
{
    unordered_map<char, int> lastPos;

    for (auto c : str)
    {
        if (c != '$')
        {
            if (lastPos.find(c) != lastPos.end())
                if (lastPos[c] > 0)
                    return false;
            lastPos[c]++;
        }
        else
            lastPos.clear();
    }
    return true;
}

int solution(string &inputString, vector<int> &positions)
{
    if (isValid(inputString))
        return 0;

    int ans = 0;
    for (auto pos : positions)
    {
        ans++;
        addChar(inputString, pos);
        if (isValid(inputString))
            return ans;
    }
    return -1;
}

int main()
{
    // Test with "abcd" and positions [1, 2]
    string s = "wkwk";
    vector<int> c = {1};
    int result = solution(s, c);
    cout << "Minimum Insertions: " << result << endl;

    // Test with another input string and positions
    string s2 = "abcd";
    vector<int> c2 = {1, 3, 2};
    int result2 = solution(s2, c2);
    cout << "Minimum Insertions for s2: " << result2 << endl;

    return 0;
}