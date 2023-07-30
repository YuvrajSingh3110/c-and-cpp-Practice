#include <iostream>
using namespace std;

int solution(string &row1, string &row2)
{
    int r1cnt = 0, w1cnt = 0, q1cnt = 0;
    int r2cnt = 0, w2cnt = 0, q2cnt = 0;

    int n = row1.length();

    for (int i = 0; i < n; i++)
    {
        if (row1[i] == 'R')
            r1cnt++;
        else if (row1[i] == 'W')
            w1cnt++;
        else if (row1[i] == '?')
            q1cnt++;
    }

    for (int i = 0; i < n; i++)
    {
        if (row2[i] == 'R')
            r2cnt++;
        else if (row2[i] == 'W')
            w2cnt++;
        else if (row2[i] == '?')
            q2cnt++;
    }

    int res1 = abs(r1cnt - w1cnt);
    int res2 = abs(r2cnt - w2cnt);

    // if already balanced
    if (res1 == 0 && res2 == 0)
    {
        return 0;
    }

    if ((res1 > q1cnt + q2cnt) || (res2 > q1cnt + q2cnt))
    {
        return -1;
    }

    int moves = 0;

    if (r1cnt > w1cnt)
    {
        if (res1 > q1cnt)
        {
            return moves = -1;
        }
        moves = moves + res1;
        r1cnt = r1cnt - res1;
        q1cnt = q1cnt - res1;
    }
    else
    {
        if (res1 > q1cnt)
        {
            return moves = -1;
        }
        moves = moves + res1;
        w1cnt = w1cnt - res1;
        q1cnt = q1cnt - res1;
    }

    if (r2cnt > w2cnt)
    {
        if (res2 > q2cnt)
        {
            return moves = -1;
        }
        moves = moves + res2;
        r2cnt = r2cnt - res2;
        q2cnt = q2cnt - res2;
    }
    else
    {
        if (res2 > q2cnt)
        {
            return moves = -1;
        }
        moves = moves + res2;
        w2cnt = w2cnt - res2;
        q2cnt = q2cnt - res2;
    }

    int changes = q1cnt + q2cnt;
    moves = moves + changes / 2;

    return moves;
}

int main()
{
    string row1 = "W?WR?", row2 = "R??W?";
    cout << solution(row1, row2);
    return 0;
}