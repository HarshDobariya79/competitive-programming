// https://www.codechef.com/problems/ADVITIYA2

#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr \
    if (0)   \
    cerr
#endif

#define MOD 998244353
#define int long long int
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n = 5;

        int temp, count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp)
            {
                count++;
            }
        }
        if (count >= 4)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
    return 0;
}