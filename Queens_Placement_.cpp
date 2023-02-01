//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int matrixMultiplication(int n, int arr[])
    {
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        for (int i = n - 1; i > -1; i--)
            for (int j = i + 1; j < n; j++)
            {
                if (j == i + 1)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    for (int k = j - 1; k > i; k--)
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + arr[i] * arr[k] * arr[j]);
                }
            }
        return dp.front().back();
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.matrixMultiplication(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends