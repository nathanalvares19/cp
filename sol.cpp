// Author: notInterested--
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define all(x) (x).begin(), (x).end()

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }

        int score = 0;
        for (int i = 1; i <= n; i++)
        {
            if (p[i] < 0)
            {
                break;
            }
            if (i != n && abs(p[i]) != i + 1)
            {
                score++;
                p[abs(p[i])] *= -1;
            }
            if (i == n)
            {
                score++;
            }
        }

        cout << score << "\n";
    }

    return 0;
}