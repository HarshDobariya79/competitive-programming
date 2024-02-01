// https://www.codechef.com/problems/ADVITIYA5

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
        int n, k;
        cin >> n >> k;

        if (k == n - 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        vector<int> evens, odds, a;

        for (int i = 1; i <= n; i += 2)
        {
            odds.push_back(i);
            evens.push_back(i + 1);
        }

        if (n % 2)
        {
            evens.pop_back();
        }
        //----------------------------------PRINT VECTOR------------------------------//
        cerr << "evens: ";
        for (auto z : evens)
        {
            cerr << z << " ";
        }
        cerr << "\n";
        //----------------------------------------------------------------------------//

        //----------------------------------PRINT VECTOR------------------------------//
        cerr << "odds: ";
        for (auto z : odds)
        {
            cerr << z << " ";
        }
        cerr << "\n";
        //----------------------------------------------------------------------------//

        int pairs = 1;

        int EO_pairs = ceil(k / 2);
        cerr << EO_pairs << endl;
        for (int i = 0; i < EO_pairs; i++)
        {
            a.push_back(evens.back());
            evens.pop_back();
            a.push_back(odds.back());
            odds.pop_back();
        }

        if ((k - 1) % 2)
        {
            a[0] = a[0] ^ a[1];
            a[1] = a[0] ^ a[1];
            a[0] = a[0] ^ a[1];
        }

        for (auto &i : evens)
        {
            a.push_back(i);
        }

        for (auto &i : odds)
        {
            a.push_back(i);
        }

        //----------------------------------PRINT VECTOR------------------------------//
        for (auto z : a)
        {
            cout << z << " ";
        }
        cout << "\n";
        //----------------------------------------------------------------------------//
    }
    return 0;
}