#include <bits/stdc++.h>
using namespace std;

int n;
bool flag = false;
vector<vector<int>> chess;
//function to display the 2-d array
void display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << chess[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printKnightsTour(int r, int c, int upcomingMove)
{
    //write your code here
    upcomingMove++;
    if (r > n - 1 or c > n - 1 or r < 0 or c < 0 or chess[r][c] > 0)
        return;
    else if (upcomingMove == n * n)
    {
        chess[r][c] = 25;
        display();
        chess[r][c] = 0;
        flag = true;
        return;
    }
    else
    {
        chess[r][c] = upcomingMove;
        printKnightsTour(r - 2, c + 1, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r - 1, c + 2, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r + 1, c + 2, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r + 2, c + 1, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r - 2, c - 1, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r - 1, c - 2, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r + 1, c - 2, upcomingMove);
        if (flag)
            return;
        printKnightsTour(r + 2, c - 1, upcomingMove);
        if (flag)
            return;
        chess[r][c] = 0;
    }
}

int main()
{
    cin >> n;
    chess.resize(n, vector<int>(n));
    int l, r;
    cin >> l >> r;
    printKnightsTour(l, r, 0);
    if (flag == false)
        cout << -1;
}